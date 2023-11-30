NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror
SRCS = 	ft_process_args.c \
		ft_memcpy.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putadr.c \
		ft_puthexa.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_putunbr.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
