# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 15:56:07 by llacsivy          #+#    #+#              #
#    Updated: 2024/05/01 14:13:25 by llacsivy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
LIB_DIR = ./libft
LIBFT_LIB = $(LIB_DIR)/libft.a
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L$(LIB_DIR) -lft

ifeq ($(DEBUG), 1)
	CFLAGS += -g
endif

all : $(NAME)

client : $(LIBFT_LIB) client.c
	cc $(CFLAGS) client.c -o client $(LDFLAGS)

server : $(LIBFT_LIB) server.c
	cc $(CFLAGS) server.c -o server $(LDFLAGS)

$(LIBFT_LIB):
	$(MAKE) -C libft

$(NAME) : client server

clean :
	$(MAKE) clean -C $(LIB_DIR)
	rm -f client server
	
fclean : clean
	$(MAKE) fclean -C $(LIB_DIR)
	rm -f libft.a
	
re : fclean all

.PHONY: all clean fclean re 