/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:26:41 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/23 20:36:37 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr(unsigned int n)
{
	char	c;

	if (n > 9)
    {
		ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
	return (calcul(n));
}