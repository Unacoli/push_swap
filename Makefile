# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nargouse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 14:54:05 by nargouse          #+#    #+#              #
#    Updated: 2021/11/11 20:06:01 by nargouse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
INCLUDE = ./include
LIBFT	= ./libft/libft.a
LIB	= $(LIBFT)
CFLAGS	= -Wall -Werror -Wextra -DLINUX

SRCS	= $(addprefix ./srcs/, main.c pa.c pb.c ra.c rb.c rra.c rrb.c rr.c rrr.c sa.c sb.c ss.c)

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $@

srcs/%.o: srcs/%.c
	$(CC) -I $(INCLUDE) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) --no-print-directory -C ./libft 

clean:
	$(MAKE) -C ./libft clean
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

test:
	$(MAKE) --no-print-directory
	./push_swap 1 1 || true
	./push_swap nop || true
	./push_swap || true
	./push_swap 1 2 3 4 || true
	./push_swap 3 2 4 1 || true

norm:
	norminette ./**/*.c ./**/*.h && echo Norm OK || echo /!\\ Norm KO /!\\

re:	fclean all

.PHONY:	all clean fclean test norm re
