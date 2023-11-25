/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:08:03 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/25 18:25:57 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char c)
{
	char	*hexa;

	if (c == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (nb > 15)
		ft_puthexa(nb / 16, c);
	write(1, &hexa[nb % 16], 1);
	return (calcul(nb));
}
