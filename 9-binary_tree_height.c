#include "binary_trees.h"

/**
 * binary_tree_hieght - a function that measures the hieght of a binary tree 
 *@tree: the tree
 * Return: the hieght of the binary tree 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return ((lh > rh) ? lh + 1 : rh + 1);
}
