/*
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** tests_stack_destroy.c
*/

#include <criterion/criterion.h>
#include "stack.h"

Test(stack_erase, mem_check)
{
    stack_t *stack = stack_new();

    cr_assert_not_null(stack);
    stack_erase(stack, NULL);
    free(stack);
}

Test(stack_destroy, mem_check)
{
    stack_t *stack = stack_new();

    cr_assert_not_null(stack);
    stack_destroy(stack, NULL);
}