#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a given node is a root
 *
 * @node: A pointer to the node to chech
 *
 * Return: Returns 1 if a root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
