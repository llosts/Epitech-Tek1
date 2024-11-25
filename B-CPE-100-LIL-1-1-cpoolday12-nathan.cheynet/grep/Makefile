##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for the lib compilation
##

SRC =		my_grep.c			\
			my_open_read_file.c	\
			my_grep_display.c

OBJ =		$(SRC:.c=.o)

MAIN_SRC =  main.c

MAIN_OBJ =  $(MAIN_SRC:.c=.o)

TEST_SRC =	../tests/test_my_grep.c

CC =		gcc
CFLAGS =	-Wall -Werror -Wextra
CLIBFLAGS = -L ../lib/my -lmy
TESTFLAGS = -lcriterion --coverage
INCLUDE =	-iquote ../include/
LIB =		../lib/my
RM =		rm -f
MAKE =		make -C
TEST_NAME = unit_tests
NAME =		grep


all:		compil_lib $(NAME)

compil_lib:
			$(MAKE) $(LIB)

$(NAME):
			$(CC) -o $(NAME) $(SRC) $(MAIN_SRC)				\
			$(INCLUDE) $(CLIBFLAGS) $(CFLAGS)

tests_run:	compil_lib
			$(CC) -o $(TEST_NAME) $(TEST_SRC) $(SRC)		\
			$(INCLUDE) $(CFLAGS) $(CLIBFLAGS) $(TESTFLAGS)
			./$(TEST_NAME)

clean:
			$(RM) $(OBJ)
			$(RM) $(MAIN_OBJ)
			$(RM) *.gcno *.gcda

fclean:     clean
			$(RM) $(NAME)
			$(RM) $(TEST_NAME)
			$(MAKE) $(LIB) fclean

re:			fclean all

.PHONY:		all clean fclean re
