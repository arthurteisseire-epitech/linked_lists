/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_pop.c
*/

#include <stddef.h>
#include "node.h"

node_t *node_pop(node_t *node)
{
    node_t *new_head = node->next;

    node->next = NULL;
    return (new_head);
}