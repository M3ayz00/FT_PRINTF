/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadidi <msaadidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:28:23 by msaadidi          #+#    #+#             */
/*   Updated: 2023/12/25 14:20:35 by msaadidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
int		check_format(char c);
int		ft_putchar(char c);
int		ft_strlen(char *s);
int		ft_putstr(char *s);
int		ft_puthexa(unsigned int nb, char c);
int		ft_putadr(unsigned long n);
int		ft_putnbr(long n);
int		ft_putunbr(unsigned int n);
int		ft_process_args(va_list arg, char c);
char	*ft_strchr(const char *str, int c);
int		check_pointer(unsigned long n);

#endif