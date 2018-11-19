/* 
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** tests_stack_new.c
*/

#include <criterion/criterion.h>
#include "stack.h"

Test(stack_new, basic)
{
    stack_t *stack = stack_new();

    cr_assert_not_null(stack);
    cr_assert_null(stack->head);
    free(stack);
}