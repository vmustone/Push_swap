# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 15:36:13 by vmustone          #+#    #+#              #
#    Updated: 2023/05/04 21:49:08 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRC = main.c push.c reverse_rotate.c rotate.c swap.c algorithm.c valid_input.c algorithm_utils.c

FLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRC:%.c=%.o)

all: $(NAME) $(LIBFT) $(OBJECTS)

$(LIBFT):
	Make -C libft

$(NAME): $(LIBFT) $(OBJECTS)
	cc $(FLAGS) $(OBJECTS) $(LIBFT) -o $(NAME) -fsanitize=address

clean:
	rm -f $(OBJECTS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	
re: fclean all

%.o: %.c
	cc $(WWW) -c -o $@ $^

.phony: all clean fclean re
