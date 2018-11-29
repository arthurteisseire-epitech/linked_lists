/*
** EPITECH PROJECT, 2018
** node
** File description:
** node_pop.c
*/

#include <stddef.h>
#include "node.h"

node_t *node_pop_soft(node_t *head)
{
    node_t *new_head = head->next;

    head->next = NULL;
    return (new_head);
}

node_t *node_pop(node_t *head, void (*free_func)(void *))
{
    node_t *new_head = node_pop_soft(head);

    node_destroy(head, free_func);
    return (new_head);
}