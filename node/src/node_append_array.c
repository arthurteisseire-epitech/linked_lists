/*
** EPITECH PROJECT, 2018
** node
** File description:
** node_append_array.c
*/

#include <stddef.h>
#include "node.h"

static int find_last_index(const void **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i - 1);
}

node_t *node_append_array(const void **array, node_t *head)
{
    for (int i = find_last_index(array); i >= 0; i--) {
        head = node_push_new(head, array[i]);
        if (head == NULL)
            return (NULL);
    }
    return (head);
}