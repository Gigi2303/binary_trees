#include"binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes of a tree
 *
 * @tree: A pointer to the root node to count the nodes
 *
 * Return: Returns 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counts = 0;

	if (tree)
	{
		counts += (tree->left || tree->right) ? 1 : 0;
		counts += binary_tree_nodes(tree->left);
		counts += binary_tree_nodes(tree->right);
	}

	return (counts);
}
