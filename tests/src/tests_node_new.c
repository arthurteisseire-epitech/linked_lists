/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_new.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_new, basic)
{
    const char *data = "data";
    struct node_s *node = node_new((void *)data);

    cr_assert_not_null(node);
    cr_assert_null(node->next);
    cr_assert_str_eq(node->data, data);
    free(node);
}