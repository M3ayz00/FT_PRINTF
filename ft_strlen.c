/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:55:24 by msaadidi          #+#    #+#             */
/*   Updated: 2023/11/23 19:33:00 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char *s)
{
    int count;
    
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