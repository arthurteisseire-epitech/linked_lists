/* 
** EPITECH PROJECT, 2018
** node
** File description:
** tests_node_destroy.c
*/

#include <criterion/criterion.h>
#include "node.h"

Test(node_destroy, basic)
{
    void *mem = malloc(1);
    node_t *node = node_new(mem);

    node_destroy(node, free);
}