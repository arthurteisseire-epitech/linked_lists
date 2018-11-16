/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_append_array.c
*/

#include <criterion/criterion.h>
#include "node.h"

void assert_list_equals_array(node_t *head, void **array)
{
    node_t *curr = head;

    for (unsigned i = 0; array[i] != NULL; i++) {
        cr_assert_str_eq(curr->data, array[i]);
        curr = curr->next;
    }
}

Test(node_append_array, basic)
{
    void *array[] = {"data1", "data2", NULL};
    node_t *head = node_new(NULL);

    cr_assert_not_null(head);
    head = node_append_array(head, array);
    cr_assert_not_null(head);
    assert_list_equals_array(head, array);
    while (head != NULL)
        head = node_pop(head, NULL);
}