/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:53:03 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:04:42 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*cast_b;

	cast_b = (char *)b;
	while (len > 0)
	{
		cast_b[len - 1] = (unsigned char)c;
		len--;
	}
	return (cast_b);
}
