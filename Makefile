# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 14:47:57 by root              #+#    #+#              #
#    Updated: 2024/11/12 12:17:09 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#
NAME = libftprintf.a

SRCS = src/ft_printf.c src/ft_printchar.c src/ft_printstr.c src/ft_printint.c src/ft_printptr.c

OBJS = $(SRCS:.c=.o)

HEADER = ./ft_printf.h
#==============================================================================#
#                            FLAGS & COMMANDS                                  #
#==============================================================================#
C_COMP = cc

FLAGS = -Wall -Werror -Wextra

FLAGS += -g

RM = rm -f

AR = ar rcs
#==============================================================================#
#                                 COLORS                                      #
#==============================================================================#
RED		= "\033[0;31m"
GREEN		= "\033[0;32m"  
RESET		= "\033[0m"
#==============================================================================#
#                                  RULES                                       #
#==============================================================================#
all: $(NAME)

%.o: %.c $(HEADER)
	$(C_COMP) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!"$(RESET)

clean:
	@$(RM) $(OBJS)
	@echo $(RED) "All *.o were deleted!" $(RESET)
	
fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT_ARC)
	@echo $(RED) "$(NAME) and $(LIBFT_ARC) were deleted!" $(RESET)

re: fclean all

.PHONY: all clean fclean re get_libft
