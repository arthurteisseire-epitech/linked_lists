/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** tests_stack_pop.c
*/

#include <criterion/criterion.h>
#include "stack.h"

Test(stack_pop, basic)
{
    stack_t *stack = stack_new();

    cr_assert_not_null(stack);
    cr_assert(stack_push(stack, "data") != -1);
    stack_pop(stack, NULL);
    cr_assert_null(stack_get(stack));
    free(stack);
}