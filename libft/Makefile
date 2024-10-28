# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 13:30:18 by icunha-t          #+#    #+#              #
#    Updated: 2024/10/28 13:30:19 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c

OBJS = $(SRCS:.c=.o)

HEADER = ./libft.h

CC = cc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)
	cc $(OBJS) -o $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I $(HEADER) -c $(SRCS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

BLACK		="\[\033[0;30m\]"
RED		="\[\033[0;31m\]"
GREEN		="\[\033[0;32m\]"
YELLOW		="\[\033[0;33m\]"
BLUE		="\[\033[0;34m\]"        
PURPLE		="\[\033[0;35m\]"     
CYAN		="\[\033[0;36m\]"         
WHITE		="\[\033[0;37m\]"    
RESET		="\033[0m"

