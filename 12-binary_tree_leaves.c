#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *@tree: the tree
 * Return: the height of the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		leaf += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaf += binary_tree_leaves(tree->right);
	if (!tree->right && !tree->left)
		leaf++;
	return (leaf);
}
