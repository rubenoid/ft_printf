NAME = libftprintf.a

SRC = char_str_functions.c \
	ft_abs.c \
	ft_isdigit.c \
	ft_printf.c \
	ft_putchar_amount.c \
	ft_putnbr.c \
	ft_putnbr_hex.c \
	ft_putstr.c \
	ft_strlen.c \
	get_conv.c \
	get_flags.c \
	nbr_length_ull.c \
	parse_conv_csxup.c \
	parse_conv_d.c \
	print_char.c \
	print_digit.c \
	print_digit_p2.c \
	print_str.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) -w -c $<

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f bonus

fclean: clean
	/bin/rm -f $(NAME)

bonus: $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	touch bonus

re: fclean all
