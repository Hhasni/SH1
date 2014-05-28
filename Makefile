#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhasni <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:51:34 by hhasni            #+#    #+#              #
#    Updated: 2014/05/18 22:32:13 by hhasni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ft_minishell2

CPATH =		./srcs/

HPATH =		-I ./includes/ \
			-I ./libft/includes/

SRCS =		ft_alias.c \
			ft_alias_tools.c \
			ft_build.c \
			ft_cd.c \
			ft_cmd.c \
			ft_env.c \
			ft_error.c \
			ft_loop.c \
			ft_path.c \
			ft_prompt.c \
			ft_protected_free.c \
			ft_semicolon.c \
			ft_setenv.c \
			ft_tools.c \
			ft_unsetenv.c \
			main.c

INCLUDES =	./libft/libft.a

OBJS =		$(SRCS:.c=.o)

CC =		clang

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\n\r\033[38;5;11m⌛  MAKE $(NAME) plz wait...\033[0m\033[K"
			@make -C ./libft/
			@$(CC) -o $(NAME) $(CFLAGS) $(OBJS) $(INCLUDES) -ltermcap
			@echo -en "\r\033[38;5;22m✅  MAKE $(NAME)\033[0m\033[K"
			@echo "💟"

%.o:		$(CPATH)%.c
			@$(CC) -c $< $(CFLAGS) $(HPATH)

clean:
			@$(RM) $(OBJS)
			@make -C ./libft/ clean
			@echo -en "\r\033[38;5;124m❌  CLEAN $(NAME) \033[0m\033[K"

fclean:		clean
			@$(RM) $(NAME)
			@make -C ./libft/ fclean
			@echo -en "\r\033[38;5;124m❌  FCLEAN $(NAME) \033[0m\033[K"

re:			fclean all
