/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:37 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:21:38 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

int			main(int argc, char **argv)
{
	char	*str;

	(void)argv;
	if (argc == 1)
	{
		str = get_string(); //Получаем информацию из STDIN
		if (str)
			rush_2(str); //Отправляем эту информацию на обработку в функцию rush_2
		else
			ft_putstr("malloc() failed: please try again");
	}
	else
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
