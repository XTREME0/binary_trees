#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the hieght of a binary tree
 *@tree: the tree
 * Return: the hieght of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rh = binary_tree_height(tree->right) + 1;
	return ((lh > rh) ? lh : rh);
}
