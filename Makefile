# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/11/03 17:40:17 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
INCLUDE = ./include
LIBFT	= ./libft/libft.a
LIB	= $(LIBFT)
CFLAGS	= -Wall -Werror -Wextra -DLINUX

SRCS	= 

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(MLX) $(LIBFT) $(OBJS)
	$(CC) $(OBJS) $(LIB) $(LFLAGS) -o $@

srcs/%.o: srcs/%.c
	$(CC) -I $(INCLUDE) -c $< -o $@

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	$(MAKE) -C ./libft clean
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re:	fclean all

.PHONY:	all clean fclean re
