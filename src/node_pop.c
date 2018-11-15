/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_pop.c
*/

#include <stddef.h>
#include "node.h"

node_t *node_pop(node_t *node, void (*free_func)(void *))
{
    node_t *new_head = node->next;

    node->next = NULL;
    if (free_func != NULL)
        free_func(node);
    return (new_head);
}