#include"binary_trees.h"

/**
 * binary_tree_postorder - This function tranverses the tree using postorder
 * @tree: the pointer to the tree to tranverse
 * @func: the function pointer to a function for each node
 *
 * Return: nothing if tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
