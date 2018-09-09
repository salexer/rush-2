/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:53 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 16:21:54 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
char				*get_string(void);
void				rush_2(char *str);
void				check_rush(char *str, int *l, int *h);
void				print_rush(int	colle[5], int *l, int *h, int count);
int					check_lines_size(char *str, int l_size);
int					is_valid(char *str, int *l, int *h);
int					check_characters(char *str, int i);
int					is_rush00(char *str, int *l, int *h);
int					is_rush01(char *str, int *l, int *h);
int					is_rush02(char *str, int *l, int *h);
int					is_rush03(char *str, int *l, int *h);
int					is_rush04(char *str, int *l, int *h);

#endif
