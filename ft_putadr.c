/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:57:40 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/30 17:26:37 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	int	count;
	unsigned long	nb;
	
	nb = n;
	count = 0;
	if ((void *)nb == (void *)0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	return (count += ft_putadr(nb));
}
