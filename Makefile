##
## EPITECH PROJECT, 2017
## File Name : Makefile
## File description:
## Project Name : linked_lists
##

MODULES	=	node	\
			stack	\

RUN_MOD_RULE	=	for module in $(MODULES); do\
            			$(MAKE) --directory=$$module $@;\
            		done

all:
	$(RUN_MOD_RULE)

clean:
	$(RUN_MOD_RULE)

fclean:
	$(RUN_MOD_RULE)

re:
	$(RUN_MOD_RULE)

debug:
	$(RUN_MOD_RULE)

test_run:
	$(RUN_MOD_RULE)

test_debug:
	$(RUN_MOD_RULE)

.PHONY: all clean fclean re debug test_run test_debug
