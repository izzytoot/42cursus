# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 14:47:57 by root              #+#    #+#              #
#    Updated: 2024/11/08 16:01:19 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
DEPS = ft_printf.h 
LIBFTNAME = libft.a
LIBFTDIR = ./libft

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

C_COMP = cc
FLAGS = -Wall -Werror -Wextra

RED		= "\033[0;31m"
GREEN		= "\033[0;32m"  
RESET		= "\033[0m"

all: $(NAME)

$(NAME): $(OBJS) $(DEPS)
	@ar rcs $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!" $(RESET)

%.o: %.c $(DEPS)
	$(C_COMP) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo $(RED) "All *.o were deleted!" $(RESET)
	
fclean: clean
	@rm -f $(NAME)
	@echo $(RED) "$(NAME) was deleted!" $(RESET)

re: fclean all

.PHONY: all fclean re