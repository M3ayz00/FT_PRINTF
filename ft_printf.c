/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:05:39 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/23 20:55:14 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int check_format(char c)
{
	char flags[10];

	ft_memcpy(flags, "cspdiuxX%", 10);
	if (ft_strchr(flags, c))
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	int	count;

	count = 0;
	va_start(arg,format);
	while(*format)
	{
		if (*format == '%' && check_format(*(format + 1)))
		{
			format++;
			count += ft_process_args(arg, *format);
		}
			break;
		format++;
	}
	va_end(arg);
	return (count);
}