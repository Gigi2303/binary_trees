#include "binary_trees.h"

/**
 * binary_tree_balance - Function measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
		balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}

/**
 * binary_tree_height - This function measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	size_t height;

	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		height = (left_height > right_height) ? left_height : right_height;
		return (height);
	}
	return (0);
}
