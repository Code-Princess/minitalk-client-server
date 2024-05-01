/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:59:32 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 13:29:22 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	encrypt_char(pid_t pid, char c)
{
	int		ascii_code;
	int		shift_left;

	shift_left = 0;
	ascii_code = c;
	while (shift_left < 8)
	{
		if ((ascii_code & (00000001 << shift_left)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		shift_left++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	pid_t	server_pid;
	int		j;

	j = 0;
	if (argc != 3)
		ft_printf("error! your input should look like this: "
			"./client <PID> <MESSAGE>\n");
	else
	{
		server_pid = (pid_t)ft_atoi(argv[1]);
		while (argv[2][j] != '\0')
		{
			encrypt_char(server_pid, argv[2][j]);
			j++;
		}
		encrypt_char(server_pid, '\n');
	}
	return (0);
}
