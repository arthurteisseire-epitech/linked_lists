/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_destroy_all.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_destroy_all, basic)
{
    void *datas[] = {"data1", "data2", "data3", NULL};
    node_t *head = node_append_array(datas, NULL);

    cr_assert_not_null(head);
    node_destroy_all(head, NULL);
}