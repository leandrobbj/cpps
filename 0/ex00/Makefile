# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 14:44:44 by lbraga            #+#    #+#              #
#    Updated: 2026/11/19 13:13:04 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= megaphone.cpp
OBJS		= $(SRC:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "* $(NAME) compiled"

obj/%.o: %.cpp
	@mkdir -p $(@D)
	@echo "* compiling $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf obj
	@echo "* $(NAME) objects removed"

fclean: clean
	@rm -f $(NAME)
	@echo "* $(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
