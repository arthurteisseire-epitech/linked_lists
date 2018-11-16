/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_append_array.c
*/

#include <stddef.h>
#include "node.h"

node_t *node_append_array(node_t *old_head, void **array)
{
    int i = 0;
    node_t *tmp;
    node_t *head = old_head;

    while (array[i] != NULL)
        i++;
    for (i--; i >= 0; i--) {
        tmp = node_new(array[i]);
        if (tmp == NULL)
            return (NULL);
        node_push(tmp, head);
        head = tmp;
    }
    return (head);
}