/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:57:40 by msaadidi          #+#    #+#             */
/*   Updated: 2023/12/25 14:17:47 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	count = ft_strlen(s);
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	return (count);
}

int	ft_puthexa(unsigned int nb, char c)
{
	char	*hexa;
	int		count;

	count = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (nb > 15)
		count += ft_puthexa(nb / 16, c);
	count += ft_putchar(hexa[nb % 16]);
	return (count);
}

int	ft_putadr(unsigned long n)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = "0123456789abcdef";
	if (n > 15)
		count += ft_putadr(n / 16);
	count += ft_putchar(ptr[n % 16]);
	return (count);
}

int	check_pointer(unsigned long n)
{
	int				count;
	unsigned long	nb;

	nb = n;
	count = 0;
	if ((void *)nb == (void *)0)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	return (count += ft_putadr(nb));
}

int	ft_putnbr(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar(nb % 10 + '0');
	return (count);
}
