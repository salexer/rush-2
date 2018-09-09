/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:20:26 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:34:15 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

void	check_rush(char *str, int *l, int *h)
{
	int count;
	int rush[5];
	int i;

	i = 0;
	count = 0;
	rush[0] = (is_rush00(str, l, h) == 1) ? 1 : 0;
	rush[1] = (is_rush01(str, l, h) == 1) ? 1 : 0;
	rush[2] = (is_rush02(str, l, h) == 1) ? 1 : 0;
	rush[3] = (is_rush03(str, l, h) == 1) ? 1 : 0;
	rush[4] = (is_rush04(str, l, h) == 1) ? 1 : 0;
	/* Строка может походить на несколько рашей, поэтому считаем на сколько рашей похожа строка */
	while (i < 5)
	{
		count += rush[i];
		i++;
	}
	if (count > 0)
		print_rush(rush, l, h, count);
	else
		ft_putstr("aucune");
}
