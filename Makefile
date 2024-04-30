# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 15:56:07 by llacsivy          #+#    #+#              #
#    Updated: 2024/04/30 19:28:50 by llacsivy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
LIBFT_LIB = libft.a
CFLAGS = -Wall -Wextra -Werror -L$(PWD) -lft

all : $(NAME)

client : $(LIBFT_LIB) client.c
	cc $(CFLAGS) client.c -o client

server : $(LIBFT_LIB) server.c
	cc $(CFLAGS) server.c -o server

$(LIBFT_LIB): libft/*
	$(MAKE) -C libft
	@mv libft/libft.a . 

$(NAME) : client server

debug_client :
	cc $(CFLAGS) -g client.c -o client

debug_server :
	cc $(CFLAGS) -g server.c -o server

clean :
	rm -f client server
	
fclean : clean
	rm -f libft.a
	
re : fclean all

.PHONY: all clean fclean re 