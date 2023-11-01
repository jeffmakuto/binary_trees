#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Struct definitions */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/* Typedef definitions */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Print prototype function */
void binary_tree_print(const binary_tree_t *);

/* Prototype functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES.h */
