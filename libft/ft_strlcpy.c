/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:02:32 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:09:34 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_help(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dstsize_without_nullterminator;

	src_len = ft_strlen_help(src);
	if (dstsize == 0)
		return (src_len);
	dstsize_without_nullterminator = dstsize - 1;
	while (dstsize_without_nullterminator > 0 && *src != '\0')
	{
		*dst++ = *src++;
		dstsize_without_nullterminator--;
	}
	*dst = '\0';
	return (src_len);
}

static size_t	ft_strlen_help(const char *str)
{
	size_t	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}
