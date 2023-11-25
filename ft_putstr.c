/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:01:27 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/25 18:27:21 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	c;

	c = 0;
	if (!s)
		return (ft_putstr("(null)"));
	c = ft_strlen(s);
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	return (c);
}
