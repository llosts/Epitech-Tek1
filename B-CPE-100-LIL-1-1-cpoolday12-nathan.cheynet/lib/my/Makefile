##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for the lib compilation
##

SRC =		my_strlen.c		\
			my_strstr.c

OBJ =		$(SRC:.c=.o)

CC =		gcc -c
CLIB =		ar rc
CFLAGS =	-Wall -Werror -Wextra
INCLUDE =	-iquote .
RM =		rm -f
CP =		cp
NAME =		libmy.a

$(NAME):	$(OBJ)
			$(CC) $(SRC) $(CFLAGS) $(INCLUDE)
			$(CLIB) $(NAME) $(OBJ)
			$(CP) my.h ../../include

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:     clean
			$(RM) $(NAME)
			$(RM) ../../include/my.h

re:			fclean all

.PHONY:		all clean fclean re
