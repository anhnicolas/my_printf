##
## EPITECH PROJECT, 2022
## Makefile day10
## File description:
## Makefile
##

SRC	=	./utils/my_putchar.c			\
		./utils/my_put_nbr.c			\
		./utils/my_getnbr.c 			\
		./utils/my_putstr.c				\
		./utils/my_putfloat.c			\
		./utils/my_put_uint.c			\
		./utils/my_strlen.c				\
		./utils/my_evil_str.c 			\
		./utils/my_strcpy.c				\
		./utils/my_compute_power_it.c	\
		./utils/my_convert_octal.c		\
		./utils/my_convert_binary.c		\
		./utils/my_put_lhexa.c			\
		./utils/my_put_uhexa.c			\
		./utils/my_put_pointer.c		\
		./utils/my_put_ocstr.c			\
		./utils/count_digit.c			\
		./utils/count_float_digits.c	\
		./utils/count_uint_digits.c		\
		./utils/count_octal.c			\
		./utils/count_binary.c			\
		./utils/count_lhexa.c			\
		./utils/count_uhexa.c			\
		./utils/count_pointer.c			\
		./utils/count_ocstr.c			\
		format.c						\
		type_1.c						\
		type_2.c						\
		type_3.c						\
		my_printf.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra  -I./include

NAME =	libmy.a

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

re:	fclean all

.PHONY: all clean fclean re
