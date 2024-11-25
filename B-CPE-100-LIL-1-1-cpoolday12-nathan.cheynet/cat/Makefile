##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for the lib compilation
##

SRC =		my_open_read_file.c		\
			my_cat.c

OBJ =		$(SRC:.c=.o)

MAIN_SRC =  main.c

MAIN_OBJ =  $(MAIN_SRC:.c=.o)

TEST_SRC =	../tests/test_my_open_file.c	\
			../tests/test_my_read_file.c	\
			../tests/test_my_cat.c

CC =		gcc
CFLAGS =	-Wall -Werror -Wextra
TESTFLAGS = -lcriterion --coverage
INCLUDE =	-iquote ../include/
RM =		rm -f
MAKE =		make -C
TEST_NAME = unit_tests
NAME =		cat


all:		$(NAME)

$(NAME):
			$(CC) -o $(NAME) $(SRC) $(MAIN_SRC)				\
			$(INCLUDE) $(CFLAGS)

tests_run:
			$(CC) -o $(TEST_NAME) $(TEST_SRC) $(SRC)		\
			$(INCLUDE) $(CFLAGS) $(TESTFLAGS)
			./$(TEST_NAME)

clean:
			$(RM) $(OBJ)
			$(RM) $(MAIN_OBJ)
			$(RM) *.gcno *.gcda

fclean:     clean
			$(RM) $(NAME)
			$(RM) $(TEST_NAME)

re:			fclean all

.PHONY:		all clean fclean re
