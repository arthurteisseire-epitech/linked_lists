/*
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_pop.c
*/

#include <criterion/criterion.h>
#include "node.h"

static node_t *init_list(void)
{
    char *old_head_str = strdup("old_head");
    char *new_head_str = strdup("new_head");
    node_t *old_head = node_new(old_head_str);
    node_t *new_head = node_new(new_head_str);

    cr_assert_not_null(old_head_str);
    cr_assert_not_null(new_head_str);
    cr_assert_not_null(old_head);
    cr_assert_not_null(new_head);
    node_push(new_head, old_head);
    return (new_head);
}

Test(node_pop_soft, basic)
{
    node_t *head = init_list();
    node_t *new_head;

    cr_assert_not_null(head->next);
    new_head = node_pop_soft(head);
    cr_assert_null(head->next);
    node_destroy(new_head, free);
    node_destroy(head, free);
}

Test(node_pop, basic)
{
    node_t *head = init_list();
    node_t *new_head;

    cr_assert_not_null(head->next);
    new_head = node_pop(head, free);
    node_destroy(new_head, free);
}