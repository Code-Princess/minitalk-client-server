/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:50:56 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:03:26 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cast_dst;
	char	*cast_src;

	cast_dst = (char *)dst;
	cast_src = (char *)src;
	if (cast_dst == NULL && cast_src == NULL)
		return (dst);
	while (n > 0)
	{
		*cast_dst++ = *cast_src++;
		n--;
	}
	return (dst);
}
