/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_destroy.c
*/

#include <stdlib.h>
#include "stack.h"

void stack_erase(stack_t *stack, void (*free_func)(void *))
{
    while (stack_get(stack))
        stack_pop(stack, free_func);
}

void stack_destroy(stack_t *stack, void (*free_func)(void *))
{
    stack_erase(stack, free_func);
    free(stack);
}