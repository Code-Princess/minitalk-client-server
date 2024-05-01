/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:08:32 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 16:53:03 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <signal.h>
# include <unistd.h>

void	encrypt_char(pid_t pid, char c);
char	*add_letter_to_str(char letter, char	*str);
void	handler(int signal);

#endif