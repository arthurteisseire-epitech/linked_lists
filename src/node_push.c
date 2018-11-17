/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_push.c
*/

#include <stddef.h>
#include "node.h"

void node_push(node_t *new_node, node_t *head)
{
    new_node->next = head;
}

node_t *node_push_new(node_t *head, void *data)
{
    node_t *new_head = node_new(data);

    if (new_head != NULL)
        node_push(new_head, head);
    return (new_head);
}