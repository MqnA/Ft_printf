# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavagner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/16 16:13:21 by mavagner          #+#    #+#              #
#    Updated: 2017/03/06 15:31:30 by jedavid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = src/ft_display.c \
	  src/ft_printf.c \
	  src/ft_printf_c.c \
	  src/ft_printf_check_conv.c \
	  src/ft_printf_init.c \
	  src/ft_printf_dioux.c \
	  src/ft_printf_itoa.c \
	  src/ft_printf_cast_lmod.c \
	  src/ft_printf_p.c \
	  src/ft_printf_percent.c \
	  src/ft_printf_s.c \
	  src/ft_printf_itoa_base.c

OBJ = $(SRC:.c=.o)

LIBFT_OBJS = $(addprefix LIBFT/, $(shell make --no-print-directory -C LIBFT list))

$(NAME): $(OBJ)
	make -C ./LIBFT
	ar rc $(NAME) $(OBJ) $(LIBFT_OBJS)

all: $(NAME)

clean:
	make -C ./LIBFT clean
	rm -rf $(OBJ)

fclean: clean
	make -C ./LIBFT clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
