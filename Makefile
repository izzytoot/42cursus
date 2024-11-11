# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 14:47:57 by root              #+#    #+#              #
#    Updated: 2024/11/11 15:43:32 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                NAMES & PATHS                                 #
#==============================================================================#
NAME = libftprintf.a

LIBFT_PATH = ./libft

LIBFT_ARC = libft.a

SRCS = srcs/ft_printf.c srcs/ft_printchar.c srcs/ft_printstr.c srcs/ft_printptr.c

OBJS = $(SRCS:.c=.o)

HEADER = ./ft_printf.h
#==============================================================================#
#                            FLAGS & COMMANDS                                  #
#==============================================================================#
C_COMP = cc

FLAGS = -Wall -Werror -Wextra

FLAGS += -g

AR = ar rcs

MAKE = make
#==============================================================================#
#                                 COLOURS                                      #
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

$(LIBFT_ARC): $(LIBFT_PATH)/Makefile
	$(MAKE) -C $(LIBFT_PATH)
	@echo $(GREEN) "$(LIBFT_ARC) was created successfully!"$(RESET)

$(NAME): $(LIBFT_ARC) $(OBJS)
	@(AR) $(NAME) $(OBJS) $(LIBFT_ARC)
	@echo $(GREEN) "$(NAME) was created successfully!"$(RESET)

get_libft:
	if [ ! -d "$(LIBFT_PATH)" ]; then \
		echo $(GREEN)"Cloning libft repository..."$(RESET); \
		git clone git@github.com:izzytoot/libft.git $(LIBFT_PATH); \
		echo $(GREEN)"Libft downloaded successfully!"$(RESET); \
	else \
		echo $(GREEN)"Libft already exists. Skipping clone." $(RESET); \
	fi

clean:
	@rm -f $(OBJS)
	@echo $(RED) "All *.o were deleted!" $(RESET)
	
fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT_ARC)
	@echo $(RED) "$(NAME) and $(LIBFT_ARC) were deleted!" $(RESET)

re: fclean all

.PHONY: all clean fclean re get_libft