#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>


int	ft_printf(const char *, ...);
int	check_format(char c);
int ft_putchar(char c);
int ft_strlen(char *s);
int ft_putstr(char *s);
int ft_puthexa(long nb, char c);
int ft_putadr(unsigned long long n);
int ft_putnbr(long n);
int ft_putunbr(unsigned int n);
int ft_process_args(va_list arg, char c);
int calcul(long n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *str, int c);

#endif