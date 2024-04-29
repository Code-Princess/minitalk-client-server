/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:59:32 by llacsivy          #+#    #+#             */
/*   Updated: 2024/04/29 21:14:08 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*encrypt_char(char c)
{
	int		ascii_code;
	char	*char_encrypted;

	char_encrypted = "1010";
	ft_printf("c: %c\n", c);
	ascii_code = (int)c;
	ft_printf("ascii_code: %d\n", ascii_code);
	return (char_encrypted);
}

int	main(int argc, char *argv[])
{
	pid_t	server_pid;
	// int		str_message;
	char	*str_binary;

	// for testing purpose
	argc = 3;
	argv[1] = "42";
	argv[2] = "m";
	if (argc != 3)
		ft_printf("error! your input should look like this: ./client <PID> <MESSAGE>\n");
	else
	{
		server_pid = (pid_t)ft_atoi(argv[1]);
		// str_message = ft_atoi(argv[2]);
		str_binary = encrypt_char(*argv[2]);
		ft_printf("serverPID: %d\n", server_pid);
		ft_printf("char to be encrypted: %c\n", *argv[2]);
		ft_printf("encrypted to binary system: %s\n", str_binary);
		// kill(serverPID, str_message);
	}
	return (0);
}
