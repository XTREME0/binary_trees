#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *@tree: the tree
 * Return: the hieght of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		size += binary_tree_size(tree->left);
	if (tree->right != NULL)
		size += binary_tree_size(tree->right);
	return (size);
}
