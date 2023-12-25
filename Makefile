NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror
SRCS = 	ft_printf_utils.c \
		ft_printf_utils2.c \
		ft_printf.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
