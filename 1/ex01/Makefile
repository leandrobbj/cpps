# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 14:44:44 by lbraga            #+#    #+#              #
#    Updated: 2026/11/19 13:23:02 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= horde
HEADERS		= src/Zombie.hpp
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
VALFLAGS	= --leak-check=full --show-leak-kinds=all --track-origins=yes --keep-stacktraces=alloc-and-free
SRC			= src/main.cpp src/Zombie.cpp src/zombieHorde.cpp
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

run: $(NAME)
	./$(NAME)

val: $(NAME)
	valgrind ./$(NAME)

valf: $(NAME)
	valgrind $(VALFLAGS) ./$(NAME)

.PHONY: all clean fclean re run val valf
