#include"binary_trees.h"

/**
 * binary_tree_size - This function Measures the size of a binary tree
 * @tree:This is a  Pointer to the root node of the tree
 * Return: Returns the Size of the tree, or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
