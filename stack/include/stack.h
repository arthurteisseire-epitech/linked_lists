/* 
** EPITECH PROJECT, 2018
** linked_lists
** File description:
** stack.h
*/

#ifndef STACK_H
#define STACK_H

#include "node.h"

typedef struct stack_s {
    node_t *head;
} stack_t;

stack_t *stack_new(void);

#endif
