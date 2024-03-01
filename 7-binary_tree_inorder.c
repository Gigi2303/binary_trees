#include"binary_trees.h"

/**
 *binary_tree_inorder - This go through a binary tree using inorder tranversal
 *@tree: The pointer to thr node
 *@func: The fuction pointer
 *
 * Return: Returns nothing if tree and func is NULL
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
