/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:15:20 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:46:15 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	len = dst_len + src_len;
	if (dstsize <= dst_len)
	{
		len = src_len + dstsize;
		return (len);
	}
	while (dst_len < (dstsize - 1) && *src != '\0')
	{
		dst[dst_len] = *src++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (len);
}
