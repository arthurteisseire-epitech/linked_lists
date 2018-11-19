/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_push.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_push_new, basic)
{
    void *datas[] = {"data1", "data2"};
    node_t *head = node_new(datas[0]);

    cr_assert_not_null(head);
    head = node_push_new(head, datas[1]);
    cr_assert_not_null(head);
    cr_assert_str_eq(head->data, datas[1]);
    node_destroy_all(head, NULL);
}

Test(node_push, basic)
{
    node_t *old_head = node_new("old_head");
    node_t *new_head = node_new("new_head");

    cr_assert_not_null(old_head);
    cr_assert_not_null(new_head);
    node_push(new_head, old_head);
    cr_assert_eq(new_head->next, old_head);
    free(old_head);
    free(new_head);
}