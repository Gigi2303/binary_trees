#include"binary_trees.h"

/**
 *binary_tree_preorder - This function iterates a binary tree through preorder
 *@tree: A pointer to the root node of the tree to traverse
 *@func: The pointer to a function to call for each node
 *
 * Return: nothing if tree of func is NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
