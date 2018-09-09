/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:20:40 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:20:42 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "tools.h"

void		ft_list_push_back(t_list **begin_list, char data)
{
	t_list		*start;

	start = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		while (start->next)
			start = start->next;
		start->next = ft_create_elem(data);
	}
}
