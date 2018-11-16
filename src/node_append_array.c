/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_append_array.c
*/

#include <stddef.h>
#include "node.h"

static int get_last_index(void **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i - 1);
}

static node_t *append_new_node(node_t *head, void *data)
{
    node_t *new_head = node_new(data);

    if (new_head == NULL)
        return (NULL);
    node_push(new_head, head);
    return (new_head);
}

node_t *node_append_array(node_t *head, void **array)
{
    for (int i = get_last_index(array); i >= 0; i--) {
        head = append_new_node(head, array[i]);
        if (head == NULL)
            return (NULL);
    }
    return (head);
}