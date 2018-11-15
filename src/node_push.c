/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_push.c
*/

#include "node.h"

void node_push(node_t *head, node_t *new_node)
{
    new_node->next = head;
}