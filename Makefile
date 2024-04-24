# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 15:56:07 by llacsivy          #+#    #+#              #
#    Updated: 2024/04/24 14:23:01 by llacsivy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

client :
	cc $(CFLAGS) client.c -o client

server :
	cc $(CFLAGS) server.c -o server

$(NAME) : client server

debug_client :
	cc $(CFLAGS) -g client.c -o client

debug_server :
	cc $(CFLAGS) -g server.c -o server

clean :
	rm -f client server
	
fclean : clean

re : fclean all

.PHONY: all clean fclean re 