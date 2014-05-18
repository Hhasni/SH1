#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhasni <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:51:34 by hhasni            #+#    #+#              #
#    Updated: 2014/04/23 00:06:39 by hhasni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

CPATH =		./srcs/

HPATH =		-I ./includes/

SRCS =		ft_atoi.c \
			ft_bzero.c \
			ft_words.c \
			ft_free_str.c \
			ft_free_tab.c \
			ft_int_len.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_color.c \
			ft_putchar_fd.c \
			ft_putcolor.c \
			ft_putcolor_endl.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_remove_char.c \
			ft_remove_space.c \
			ft_rgb_to_int.c \
			ft_squar_number.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strdup_to_end.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strlen_occur.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strreverse.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_swap.c \
			ft_swap_int.c \
			ft_tab_line_number.c \
			ft_tablen.c \
			ft_tablen_occur.c \
			ft_tolower.c \
			ft_toupper.c \
			get_next_line.c


OBJS =		$(SRCS:.c=.o)

CC =		clang

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\n\r\033[38;5;11m⌛  MAKE $(NAME) plz wait...\033[0m\033[K"
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo -en "\r\033[38;5;22m✅  MAKE $(NAME)\033[0m\033[K"

%.o:		$(CPATH)%.c
			@$(CC) $(HPATH) -o $@ -c $< $(CFLAGS)

clean:
			@$(RM) $(OBJS)
			@echo -en "\r\033[38;5;124m❌  CLEAN $(NAME) \033[0m\033[K"

fclean:		clean
			@$(RM) $(NAME)
			@echo -en "\r\033[38;5;124m❌  FCLEAN $(NAME) \033[0m\033[K"

re:			fclean all
