/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:04:29 by llacsivy          #+#    #+#             */
/*   Updated: 2024/04/30 19:42:13 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	static int	ascii_code;
	static int	shift_left;

	if (signal == SIGUSR1)
	{
		ascii_code = ascii_code | (00000001 << shift_left);
	}
	shift_left++;
	if (shift_left == 8)
	{
		ft_printf("%c", ascii_code);
		shift_left = 0;
		ascii_code = 0;
	}
}

int	main(int argc, char	*argv[])
{
	(void)argv;
	if (argc != 1)
	{
		ft_printf("error! please run the server program like this: "
			"./server\n");
	}
	else
	{
		while (argc == 1)
		{
			signal(SIGUSR1, handler);
			signal(SIGUSR2, handler);
			pause ();
		}
		ft_printf("Server pid: %d", getpid());
	}
	return (0);
}
