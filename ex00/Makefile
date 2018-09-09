# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmichaud <jmichaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 11:09:20 by jmichaud          #+#    #+#              #
#    Updated: 2018/09/09 15:32:44 by btion-fr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	colle-2

SRC		=	./srcs/main.c\
			./srcs/check_rush.c\
			./srcs/ft_list_push_back.c\
			./srcs/is_rush00.c\
			./srcs/is_rush01.c\
			./srcs/is_rush02.c\
			./srcs/is_rush03.c\
			./srcs/is_rush04.c\
			./srcs/get_string.c\
			./srcs/is_valid.c\
			./srcs/rush_02.c\
			./srcs/ft_create_elem.c\
			./srcs/print_rush.c\

LIB		=	../../libft.a\

HEADER	=	./includes

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I $(HEADER)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIB)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
