#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_root - Writing a fxn that checks if a node is a root
 * @node: node to check
 *
 * Return: 1 if node is a root
 *         0 if not a root
 *         0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
