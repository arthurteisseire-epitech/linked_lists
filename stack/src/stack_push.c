/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_push.c
*/

#include <stddef.h>
#include "stack.h"

int stack_push(stack_t *stack, void *data)
{
    stack->head = node_push_new(stack->head, data);
    if (stack->head == NULL)
        return (-1);
    return (0);
}