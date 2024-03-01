#include"binary_trees.h"

/**
 *binary_tree_depth - This fuction returns the depth of a tree
 *@tree: this is the tree check thr depth
 *Return: if tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		deep++;
		tree = tree->parent;
	}
	return (deep);
}
