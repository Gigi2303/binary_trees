#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ht = 0, right_ht = 0;

	if (tree == NULL)
		return (0);
	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);
	return ((left_ht > right_ht) ? left_ht + 1 : right_ht + 1);
}

/**
 * binary_tree_is_perfect - This function Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, return 0.
 *         Otherwise, return 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_ht = 0, right_ht = 0;

	if (tree == NULL)
		return (0);

	right_ht = binary_tree_height(tree->right);
	left_ht = binary_tree_height(tree->left);

	if (left_ht == right_ht)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
