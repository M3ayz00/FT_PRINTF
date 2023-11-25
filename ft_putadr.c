/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:57:40 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/25 18:29:06 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadr(unsigned long long n)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (n > 15)
	{
		ft_putadr(n / 16);
		ft_putadr(n % 16);
	}
	write(1, &ptr[n], 1);
	return (calcul(n));
}
