##
## EPITECH PROJECT, 2018
## stack
## File description:
## Makefile
##

CC		=	gcc
ROOT	=	../

DNODE	=	$(ROOT)node/
LIBNODE	=	node

LIBS	+=	-L$(DNODE) -l$(LIBNODE)

INC		=	include
INC_NODE=	$(DNODE)include/
DTESTS	=	tests/
DSRC	=	src/
DSRC_UT	=	tests/src/

SRC		=	$(DSRC)stack_new.c	\
			$(DSRC)stack_push.c	\
			$(DSRC)stack_get.c	\

SRC_UT	=	$(DSRC_UT)tests_stack_new.c		\
			$(DSRC_UT)tests_stack_push.c	\

CFLAGS	+=	-Wall -W -Wextra -I$(INC) -I$(INC_NODE)
LDFLAGS	=	-lcriterion
OBJ		=	$(SRC:.c=.o)
NAME	=	libstack.a
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
test_run:
	$(CC) -o $(NAME_UT) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS) $(LIBS)
	./$(NAME_UT)
	gcov *.gcno &> /dev/null

test_debug: CFLAGS += -g
test_debug: test_run

.PHONY: all clean fclean re debug test_run test_debug
