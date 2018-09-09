/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:47 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:21:48 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

void	rush_2(char *str)
{
	int		*l;
	int		*h;
	int		lenght;
	int		height;

	lenght = 0;
	height = 0;
	l = &lenght;
	h = &height;
	if (is_valid(str, l, h)) //Если информация в строке валидна, ищем какой именно раш нам дали
		check_rush(str, l, h);
	else
		ft_putstr("aucune");
}
