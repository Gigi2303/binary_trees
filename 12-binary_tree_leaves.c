#include"binary_trees.h"

/**
 * binary_tree_leaves - This function counts the leaves of a binary tree
 * @tree: A Pointer to the root node of the tree
 *
 * Return: Return the number of leaf nodes in the tree, or 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		count = 1;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
