# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 14:44:44 by lbraga            #+#    #+#              #
#    Updated: 2026/11/19 21:08:05 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= brain
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= main.cpp
OBJS		= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "* $(NAME) compiled"

%.o: %.cpp
	@mkdir -p $(@D)
	@echo "* compiling $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "* $(NAME) objects removed"

fclean: clean
	@rm -f $(NAME)
	@echo "* $(NAME) removed"

re: fclean all

run: $(NAME)
	./$(NAME)

val: $(NAME)
	valgrind ./$(NAME)

.PHONY: all clean fclean re run val
