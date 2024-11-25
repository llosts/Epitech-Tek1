##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for the lib compilation
##

SRC =       my_calculs.c		\
			my_usage.c			\
			my_advanced_do_op.c \
			main.c

OBJ =		$(SRC:.c=.o)

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror
CLIB =		-L ../lib/my -lmy
INCLUDE =	-iquote ../include/
RM =		rm -f

NAME =		my_advanced_do-op

all:		$(NAME)

$(NAME):
			$(CC) -o $(NAME) $(SRC) $(INCLUDE) $(CLIB) $(CFLAGS)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
