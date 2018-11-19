/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_destroy.c
*/

#include <stdlib.h>
#include "node.h"

void node_destroy(node_t *node, void (*free_func)(void *))
{
    if (free_func != NULL)
        free_func(node->data);
    free(node);
}