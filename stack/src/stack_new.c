/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack_new.c
*/

#include <stdlib.h>
#include "stack.h"

stack_t *stack_new(void)
{
    return (calloc(1, sizeof(stack_t)));
}