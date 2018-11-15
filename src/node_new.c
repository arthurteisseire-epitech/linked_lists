/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_new.c
*/

#include <stdlib.h>
#include "node.h"

node_t *node_new(void *data)
{
    node_t *node = malloc(sizeof(node_t));

    if (node != NULL) {
        node->data = data;
        node->next = NULL;
    }
    return (node);
}