/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:04:29 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/02 11:43:42 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	static int		ascii_code;
	static int		shift_left;
	static char		*str_received;

	if (str_received == NULL)
		str_received = ft_strdup("");
	if (signal == SIGUSR1)
		ascii_code = ascii_code | (00000001 << shift_left);
	shift_left++;
	if (shift_left == 8)
	{
		str_received = add_letter_to_str((char)ascii_code, str_received);
		shift_left = 0;
		ascii_code = 0;
		if (str_received[ft_strlen(str_received)] == '\0')
		{
			ft_printf("%s", str_received);
			free(str_received);
			str_received = NULL;
		}
	}
}

char	*add_letter_to_str(char letter, char	*old_str)
{
	char		str_letter[2];
	char		*new_str;

	str_letter[0] = letter;
	str_letter[1] = '\0';
	new_str = ft_strjoin(old_str, str_letter);
	free(old_str);
	return (new_str);
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
		ft_printf("Server pid: %d\n", getpid());
		while (argc == 1)
		{
			signal(SIGUSR1, handler);
			signal(SIGUSR2, handler);
			pause ();
		}
	}
	return (0);
}
