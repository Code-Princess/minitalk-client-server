/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:04:29 by llacsivy          #+#    #+#             */
/*   Updated: 2024/04/29 16:32:20 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void handler(int signal) {
	ft_printf("Signal received %d\n",signal);
}

int	main(void)
{
	// signal(SIGUSR1, handler);
	// signal(SIGUSR2, handler);
	ft_printf("Server pid: %d", getpid());
	// getchar();
	return (0);
}
