/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_remove.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_remove, basic)
{
    const void *datas[] = {"data1", "data2", "data3", NULL};
    node_t *head = node_append_array(datas, NULL);
    node_t *last = head->next->next;

    cr_assert_not_null(head);
    node_remove(head, head->next, NULL);
    cr_assert_eq(head->next, last);
    node_remove(head, head->next, NULL);
    cr_assert_eq(head->next, NULL);
    node_destroy_all(head, NULL);
}