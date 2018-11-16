/* 
** EPITECH PROJECT, 2018
** node
** File description:
** node.h
*/

#ifndef NODE_H
#define NODE_H

typedef struct node_s {
    void *data;
    struct node_s *next;
} node_t;

node_t *node_new(void *data);
void node_push(node_t *new_node, node_t *head);
node_t *node_pop_soft(node_t *head);
node_t *node_pop(node_t *head, void (*free_func)(void *));
void node_destroy(node_t *node, void (*free_func)(void *));
node_t *node_append_array(node_t *head, void **array);

#endif
