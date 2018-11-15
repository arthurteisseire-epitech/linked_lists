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

#endif
