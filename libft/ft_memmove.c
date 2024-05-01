/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:42:47 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:04:33 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cast_dst;
	char	*cast_src;

	cast_dst = (char *)dst;
	cast_src = (char *)src;
	if (cast_dst == NULL && cast_src == NULL)
		return (dst);
	if (cast_dst <= cast_src)
	{
		while (len-- > 0)
		{
			*cast_dst++ = *cast_src++;
		}
	}
	else if (cast_dst > cast_src)
	{
		cast_dst = cast_dst + len - 1;
		cast_src = cast_src + len - 1;
		while (len > 0)
		{
			*cast_dst-- = *cast_src--;
			len--;
		}
	}
	return (dst);
}
