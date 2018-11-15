/*
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_pop.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_pop, basic)
{
    node_t *old_head = node_new(NULL);
    node_t *new_head = node_new(NULL);
    node_t *next_to_head;

    cr_assert_not_null(old_head);
    cr_assert_not_null(new_head);
    node_push(old_head, new_head);
    next_to_head = node_pop(new_head);
    cr_assert_eq(old_head, next_to_head);
    cr_assert_eq(new_head->next, NULL);
    free(old_head);
    free(new_head);
}