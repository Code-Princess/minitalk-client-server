/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacsivy <llacsivy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:51:51 by llacsivy          #+#    #+#             */
/*   Updated: 2024/05/01 15:11:38 by llacsivy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkplaceholder(char c, va_list args, int *error_ptr);

int	ft_printf(const char *inputStr, ...)
{
	va_list	args;
	int		str_len;
	int		error;

	error = 0;
	str_len = 0;
	va_start(args, inputStr);
	while (*inputStr != '\0')
	{
		if (*inputStr != '%')
		{
			str_len += ft_putchar(*inputStr, &error);
			if (error == -1)
				return (error);
		}
		else if (*inputStr == '%')
		{
			str_len += ft_checkplaceholder(*(++inputStr), args, &error);
			if (error == -1)
				return (error);
		}
		inputStr++;
	}
	va_end(args);
	return (str_len);
}

static int	ft_checkplaceholder(char c, va_list args, int *error_ptr)
{
	int		char_len;

	char_len = 0;
	if (c == 'c')
		char_len = ft_putchar(va_arg(args, int), error_ptr);
	else if (c == 's')
		char_len = ft_putstr(va_arg(args, char *), error_ptr);
	else if (c == 'p')
		char_len = ft_putptr(va_arg(args, long long), error_ptr);
	else if (c == 'd' || c == 'i')
		char_len = ft_putnbr(va_arg(args, int), error_ptr);
	else if (c == 'u')
		char_len = ft_putnbr_unsigned(va_arg(args, unsigned int), error_ptr);
	else if (c == 'x')
		char_len = ft_puthexadecnbr(va_arg(args, int), error_ptr);
	else if (c == 'X')
		char_len = ft_puthexadecnbr_upper(va_arg(args, int), error_ptr);
	else if (c == '%')
		char_len = ft_putpercent(error_ptr);
	if (*error_ptr == -1)
		return (*error_ptr);
	else
		return (char_len);
}
