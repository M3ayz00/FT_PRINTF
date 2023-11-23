/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:17:25 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/23 20:55:23 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_process_args(va_list arg, char c)
{
    int count;
    
    count = 0;
    if (c == 'c')
        count = ft_putchar(va_arg(arg, int));
    else if (c == 's')
    {
        count = ft_putstr(va_arg(arg, char *));
    }
    else if (c == 'p')
    {
        count = ft_putstr("0x");   
        count += ft_putadr(va_arg(arg, unsigned long long));
    }
    else if (c == 'd' || c == 'i')
        count = ft_putnbr(va_arg(arg, int));
    else if (c == 'u')
        count = ft_putunbr(va_arg(arg, unsigned int));
    else if (c == 'x' || c == 'X')
        count = ft_puthexa(va_arg(arg, long), c);
    else
        count = ft_putchar('%');
    return (count);
}