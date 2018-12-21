/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_pop.c
*/

#include "stack.h"

void stack_pop(stack_t *stack, void (*free_func)(void *))
{
    stack->head = node_pop(stack->head, free_func);
}