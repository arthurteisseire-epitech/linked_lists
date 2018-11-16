/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_destroy_all.c
*/

#include <stddef.h>
#include "node.h"

void node_destroy_all(node_t *head, void (*free_func)(void *))
{
    while (head != NULL)
        head = node_pop(head, free_func);
}