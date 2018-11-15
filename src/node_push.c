/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node_push.c
*/

#include "node.h"

void node_push(node_t *new_node, node_t *head)
{
    new_node->next = head;
}