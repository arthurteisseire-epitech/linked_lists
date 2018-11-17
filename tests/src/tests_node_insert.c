/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_insert.c
*/

#include <criterion/criterion.h>
#include "node.h"

static const void *datas[] = {"data1", "data2", NULL};

Test(node_insert, middle)
{
    node_t *head = node_append_array(datas, NULL);
    node_t *new_node;

    cr_assert_not_null(head);
    new_node = node_insert(head, head->next->next, NULL);
    cr_assert_not_null(new_node);
    cr_assert_eq(head->next->next, new_node);
    node_destroy_all(head, NULL);
}

Test(node_insert, head)
{
    node_t *head = node_append_array(datas, NULL);
    node_t *new_head;

    cr_assert_not_null(head);
    new_head = node_insert(head, head, NULL);
    cr_assert_not_null(new_head);
    cr_assert_eq(new_head->next, head);
    node_destroy_all(new_head, NULL);
}