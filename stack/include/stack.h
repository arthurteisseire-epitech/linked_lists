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
void stack_pop(stack_t *stack, void (*free_func)(void *));
int stack_push(stack_t *stack, void *data);
void *stack_get(stack_t *stack);
void stack_erase(stack_t *stack, void (*free_func)(void *));
void stack_destroy(stack_t *stack, void (*free_func)(void *));

#endif
