/*
** EPITECH PROJECT, 2018
** node
** File description:
** node_remove.c
*/

#include "node.h"

void node_remove(node_t *head, node_t *node, void (*free_func)(void *))
{
    node_t **curr = &head;

    while (*curr != node)
        curr = &(*curr)->next;
    *curr = node->next;
    node_destroy(node, free_func);
}