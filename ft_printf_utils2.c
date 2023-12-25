/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:08:57 by msaadidi          #+#    #+#             */
/*   Updated: 2023/12/25 14:20:41 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	while (str && *str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == '\0' && (char)c == '\0')
		return ((char *)str);
	return (NULL);
}

int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	check_format(char c)
{
	char	*flags;

	flags = "cspdiuxX%";
	if (ft_strchr(flags, c))
		return (1);
	return (0);
}

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
