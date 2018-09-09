/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:42 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:25:20 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

void	print_rush(int rush[5], int *l, int *h, int count)
{
	int i;

	i = 0;
	if (count && l && h)
	{
		while (i < 5)
		{
			if (rush[i] == 1)
			{
				ft_putstr("[rush-0");
				ft_putnbr(i);
				ft_putstr("] [");
				ft_putnbr(*l);
				ft_putstr("] [");
				ft_putnbr(*h);
				ft_putstr("]");
				if (count > 1)
				{
					ft_putstr(" || ");
					count--;
				}
			}
			i++;
		}
	}
}
