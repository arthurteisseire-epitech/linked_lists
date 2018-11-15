/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_push.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_push, basic)
{
    node_t *old_head = node_new("old_head");
    node_t *new_head = node_new("new_head");

    cr_assert_not_null(old_head);
    cr_assert_not_null(new_head);
    node_push(old_head, new_head);
    cr_assert_eq(new_head->next, old_head);
    free(old_head);
    free(new_head);
}