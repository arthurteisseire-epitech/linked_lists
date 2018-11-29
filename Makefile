##
## EPITECH PROJECT, 2017
## File Name : Makefile
## File description:
## Project Name : linked_lists
##

MODULES	=	node	\
			stack	\

RULES	=	all			\
			clean		\
			fclean		\
			re			\
			debug		\
			test_run	\
			test_debug	\

$(RULES):
	for module in $(MODULES); do\
		$(MAKE) --directory=$$module $@;\
	done

.PHONY: $(RULES)