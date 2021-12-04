# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bregneau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 17:43:00 by bregneau          #+#    #+#              #
#    Updated: 2021/12/04 06:25:37 by bregneau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c \
					ft_print_type/ft_print_char.c \
					ft_print_type/ft_print_str.c \
					ft_print_type/ft_print_int.c \
					ft_print_type/ft_print_uint.c \
					ft_print_type/ft_print_ptr.c \
					ft_print_type/ft_print_hexa.c \

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE) -C ./libft
				cp ./libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

clean:
				$(MAKE) clean -C ./libft
				$(RM) $(OBJS)

fclean:			clean
				$(MAKE) fclean -C ./libft
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

.PHONY:			all clean fclean re
