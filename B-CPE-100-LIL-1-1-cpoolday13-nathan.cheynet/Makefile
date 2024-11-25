##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for the lib compilation
##

SRC =		btree_create_node.c		\
			btree_apply_prefix.c	\
			btree_apply_infix.c		\
			btree_apply_suffix.c	\
			btree_insert_data.c		\
			btree_search_item.c		\
			btree_level_count.c

OBJ =		$(SRC:.c=.o)

CC =		gcc -c
CLIB =		ar rc
CFLAGS =	-Wall -Werror -Wextra
INCLUDE =	-iquote include/
RM =		rm -f
CP =		cp
NAME =		libbtree.a

$(NAME):
			$(CC) $(SRC) $(INCLUDE) $(CFLAGS)
			$(CLIB) $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:     clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
