/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:28 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:29:46 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_lines_size(char *str, int l_size)
{
	int		i;
	int		k;

	i = 0; //Курсор, который двигается по строке
	k = 0; //Номер символа в строке
	while (str[i])
	{
		if (k == l_size)
		{
			if (str[i] == '\n')
			{
				k = 0;
				i++;
				continue;
			}
			else
				return (0);
		}
		k++;
		i++;
	}
	return (1);
}

int		check_characters(char *str, int i)
{
	/* Тут все сиволы, которые могут встетиться в rush_00, если символ левый, возращаем 0*/
	if (str[i] == 'o' || str[i] == '-' || str[i] == '|' || str[i] == ' ' ||
			str[i] == '/' || str[i] == '\\' || str[i] == '*' || str[i] == 'A' ||
			str[i] == 'B' || str[i] == 'C' || str[i] == '\n')
		return (1);
	return (0);
}

int		is_valid(char *str, int *l, int *h)
{
	int		i;
	int		nl_count;
	int		l_size;

	i = 0;
	nl_count = 0;
	l_size = 0;
	while (str[i])
	{
		if (check_characters(str, i)) //Проверяем символ
		{
			if (str[i] == '\n')
				nl_count++; //Если это символ переноса строки - считаем количество строчек
		}
		else
			return (0);
		i++;
	}
	//Вычисляем длину строки. Сначала убираем все переносы строк, а потом делим на количество строк
	l_size = (ft_strlen(str) - nl_count) / nl_count;
	if (!(check_lines_size(str, l_size)))
		return (0);
	*l = l_size;
	*h = nl_count;
	return (1);
}
