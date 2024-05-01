/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:50:57 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:10:04 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*resultstr;
	size_t			strlen;

	index = 0;
	strlen = ft_strlen(s);
	resultstr = malloc(strlen + 1);
	if (resultstr == NULL)
		return (NULL);
	while (index < strlen)
	{
		resultstr[index] = (*f)(index, s[index]);
		index++;
	}
	resultstr[index] = '\0';
	return (resultstr);
}
