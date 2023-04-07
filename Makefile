# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 15:36:13 by vmustone          #+#    #+#              #
#    Updated: 2023/04/07 15:50:18 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRC = main.c

FLAGS = -Wall -Werror -Wextra

OBJECTS = $(SRC:%.c=%.o)

all: $(NAME) $(LIBFT) $(OBJECTS)

$(LIBFT):
	Make -C libft

$(NAME): $(LIBFT) $(OBJECTS)
	cc $(FLAGS) $(OBJECTS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(OBJECTS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	
re: fclean all

.phony: all clean fclean re
