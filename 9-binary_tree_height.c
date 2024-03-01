#include"binary_trees.h"

/**
 *binary_tree_height - This finds the height of a binary tree
 *@tree: The pointer to the tree to get the height
 *
 *Return: Returns 0 if tree is NULL else height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefty = 0, righty = 0;

		lefty = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		righty = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lefty > righty) ? lefty : righty);
	}
	return (0);
}
