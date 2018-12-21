/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** tests_stack_push.c
*/

#include <criterion/criterion.h>
#include "stack.h"

Test(stack_push, basic)
{
    stack_t *stack = stack_new();
    const char *data = "data1";

    cr_assert_not_null(stack);
    cr_assert(stack_push(stack, (void *)data) != -1);
    cr_assert(memcmp(stack_get(stack), data, strlen(data)) == 0);
    free(stack->head);
    free(stack);
}