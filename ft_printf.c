/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:05:39 by msaadidi          #+#    #+#             */
/*   Updated: 2023/12/25 13:05:52 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process_args(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (c == 's')
	{
		count = ft_putstr(va_arg(arg, char *));
	}
	else if (c == 'p')
	{
		count += check_pointer(va_arg(arg, unsigned long));
	}
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		count = ft_putunbr(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_puthexa(va_arg(arg, unsigned int), c);
	else
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && check_format(*(format + 1)))
		{
			format++;
			count += ft_process_args(arg, *format);
		}
		else
			count += ft_putchar(*format);
		if (!(*format))
			break ;
		format++;
	}
	va_end(arg);
	return (count);
}
