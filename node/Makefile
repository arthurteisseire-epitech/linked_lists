##
## EPITECH PROJECT, 2018
## node
## File description:
## Makefile
##

CC		=	gcc
INC		=	include/
DTESTS	=	tests/
DSRC	=	src/
DSRC_UT	=	tests/src/

SRC		=	$(DSRC)node_new.c			\
			$(DSRC)node_push.c			\
			$(DSRC)node_pop.c			\
			$(DSRC)node_destroy.c		\
			$(DSRC)node_destroy_all.c	\
			$(DSRC)node_append_array.c	\
			$(DSRC)node_insert.c		\
			$(DSRC)node_remove.c		\

SRC_UT	=	$(DSRC_UT)tests_node_new.c			\
			$(DSRC_UT)tests_node_push.c			\
			$(DSRC_UT)tests_node_pop.c			\
			$(DSRC_UT)tests_node_destroy.c		\
			$(DSRC_UT)tests_node_destroy_all.c	\
			$(DSRC_UT)tests_node_append_array.c	\
			$(DSRC_UT)tests_node_insert.c		\
			$(DSRC_UT)tests_node_remove.c		\

CFLAGS	+=	-Wall -W -Wextra -I$(INC)
LDFLAGS	=	-lcriterion
OBJ		=	$(SRC:.c=.o)
NAME	=	libnode.a
NAME_UT	=	units

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_UT)

re: fclean all

debug: CFLAGS += -g
debug: re

test_run: CFLAGS += --coverage
test_run: all
	$(CC) -o $(NAME_UT) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)
	./$(NAME_UT)
	gcov *.gcno &> /dev/null

test_debug: CFLAGS += -g
test_debug: test_run

.PHONY: all clean fclean re debug test_run test_debug
