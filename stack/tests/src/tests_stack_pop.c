/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** tests_stack_pop.c
*/

#include <criterion/criterion.h>
#include "stack.h"

static const char *data1 = "data1";
static const char *data2 = "data2";

Test(stack_pop, basic)
{
    stack_t *stack = stack_new();

    cr_assert_not_null(stack);
    cr_assert(stack_push(stack, (void *)data1) != -1);
    cr_assert(stack_push(stack, (void *)data2) != -1);
    stack_pop(stack, NULL);
    cr_assert_str_eq(stack_get(stack), data1);
    stack_pop(stack, NULL);
    cr_assert_null(stack_get(stack));
    free(stack);
}