/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_get.c
*/

#include "stack.h"

void *stack_get(stack_t *stack)
{
    return (stack->head->data);
}