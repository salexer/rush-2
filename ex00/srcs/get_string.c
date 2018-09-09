/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:20:50 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:20:52 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

char			*get_string(void)
{
	t_list		*chain;
	char		buf[2];
	char		*str;
	int			i;

	chain = NULL;
	i = 0;
	/* Читаем из STDIN и помещаем в динамический спиок по 1 символу*/
	while (read(0, buf, 1) > 0)
	{
		buf[1] = '\0';
		ft_list_push_back(&chain, buf[0]);
		i++;
	}
	/*Выделяем память для строки*/
	str = (char*)malloc(sizeof(*str) * i);
	i = 0;
	/*Достаем все из нашего списка и помещаем в строку, которую возвращаем main*/
	while (chain)
	{
		str[i] = chain->data;
		chain = chain->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}
