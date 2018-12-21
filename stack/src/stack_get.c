/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_get.c
*/

#include "stack.h"
#include "stddef.h"

void *stack_get(stack_t *stack)
{
    if (stack->head == NULL)
        return (NULL);
    return (stack->head->data);
}