# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrigny <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 15:55:36 by yrigny            #+#    #+#              #
#    Updated: 2024/06/26 15:55:38 by yrigny           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp SedPro.cpp

INCLUDE = SedPro.hpp

OBJ = $(SRC:.cpp=.o)

NAME = SedPro

TEST = test

GREEN = \033[1;32m

NONE = \033[0m

all: $(NAME)

test: tests.cpp $(INCLUDE)
	@$(CC) $(CFLAGS) tests.cpp -o $(TEST)
	@./$(TEST)
	@rm -f $(TEST)
	@echo "Created test files: file1, file2, file3."
	@echo "Use $(GREEN)"sed 's/oldword/newword/g' filename \> filename.sed"$(NONE) to test with sed"
	@echo "Use $(GREEN)"./SedPro filename oldword newword"$(NONE) to test with my program"
	@echo "Use $(GREEN)"diff filename.sed filename.replace"$(NONE) to compare two results"

rmtest:
	rm -f file*

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean rmtest
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
