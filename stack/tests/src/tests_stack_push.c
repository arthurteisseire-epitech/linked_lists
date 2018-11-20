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

    cr_assert_not_null(stack);
    cr_assert(stack_push(stack, "data1") != -1);
    free(stack->head);
    free(stack);
}