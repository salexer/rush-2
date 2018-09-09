/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:20:34 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:20:35 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

t_list			*ft_create_elem(char data)
{
	t_list		*next_elem;

	next_elem = (t_list*)malloc(sizeof(t_list));
	if (next_elem)
	{
		next_elem->next = NULL;
		next_elem->data = data;
	}
	return (next_elem);
}
