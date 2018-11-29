/*
** EPITECH PROJECT, 2018
** node
** File description:
** node_insert.c
*/

#include <stddef.h>
#include "node.h"

void node_insert_node(node_t *head, node_t *index, node_t *new_node)
{
    node_t **curr = &head;

    while (*curr != index)
        curr = &(*curr)->next;
    *curr = new_node;
}

node_t *node_insert(node_t *head, node_t *index, void *data)
{
    node_t *new_node = node_push_new(index, data);

    if (new_node != NULL)
        node_insert_node(head, index, new_node);
    return (new_node);
}