##
## EPITECH PROJECT, 2017
## File Name : Makefile
## File description:
## Project Name : linked_lists
##

MODULES	=	node	\

all: $(MODULES)
	make $@ -C $<

clean: $(MODULES)
	make $@ -C $<

fclean: $(MODULES)
	make $@ -C $<

debug: $(MODULES)
	make $@ -C $<

test_run: $(MODULES)
	make $@ -C $<

test_debug: $(MODULES)
	make $@ -C $<

re:	fclean all

.PHONY: all clean fclean debug test_run test_debug re
