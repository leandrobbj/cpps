# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 14:44:44 by lbraga            #+#    #+#              #
#    Updated: 2026/11/20 15:01:24 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= streamEditor
HEADERS		= src/StreamEditor.hpp
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= src/main.cpp src/StreamEditor.cpp
OBJS		= $(SRC:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "* $(NAME) compiled"

obj/%.o: src/%.cpp $(HEADERS)
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

.PHONY: all clean fclean re run
