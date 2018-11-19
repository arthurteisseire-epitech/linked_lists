##
## EPITECH PROJECT, 2017
## File Name : Makefile
## File description:
## Project Name : linked_lists
##

MODULES	=	node	\
			stack	\

all:
	for module in $(MODULES); do\
		$(MAKE) --directory=$$module $(TARGET);\
	done

.PHONY: all