# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 14:44:44 by lbraga            #+#    #+#              #
#    Updated: 2026/11/20 14:19:44 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
HEADERS		= PhoneBook.hpp Contact.hpp
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC			= main.cpp PhoneBook.cpp Contact.cpp
OBJS		= $(SRC:%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "* $(NAME) compiled"

obj/%.o: %.cpp $(HEADERS)
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

val:
	valgrind ./$(NAME)

test: CXXFLAGS += -DTEST=1
test: re val

.PHONY: all clean fclean re run val test 
