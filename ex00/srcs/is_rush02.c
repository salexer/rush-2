/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:08 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:21:10 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

int		check_first_line02(char *str, int *l)
{
	int i;
	int count;

	i = 1;
	count = ft_strlen(str);
	if (*l == 1 && str[0] == 'A')
		return (1);
	if (str[0] != 'A' || str[*l - 1] != 'A')
		return (0);
	while (i < *l - 1 && count > 2)
	{
		if (str[i] != 'B')
			return (0);
		i++;
	}
	return (1);
}

int		check_content02(char *str, int *l, int *h)
{
	int i;
	int count;

	i = *l;
	count = ft_strlen(str);
	if (*h < 3)
		return (1);
	while (i < count - *l - 2)
	{
		if (str[i] == '\n')
			i++;
		if ((str[i - 1] == '\n' && str[i] != 'B') ||
				(str[i + 1] == '\n' && str[i] != 'B'))
			return (0);
		else if ((str[i - 1] == '\n' && str[i] == 'B') ||
				(str[i + 1] == '\n' && str[i] == 'B'))
		{
			i++;
			continue;
		}
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		check_last_line02(char *str, int *l, int *h)
{
	int i;
	int count;

	count = ft_strlen(str);
	i = count - *l;
	if (*h < 2)
		return (1);
	if (str[count - *l - 1] != 'C' || str[count - 2] != 'C')
		return (0);
	while (i < count - 2 && count > 2)
	{
		if (str[i] != 'B')
			return (0);
		i++;
	}
	return (1);
}

int		is_rush02(char *str, int *l, int *h)
{
	if (!(check_first_line02(str, l) && check_content02(str, l, h) &&
				check_last_line02(str, l, h)))
		return (0);
	return (1);
}
