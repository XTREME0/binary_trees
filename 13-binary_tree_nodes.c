#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 *@tree: the tree
 * Return: nodes on a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		node += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		node += binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		node++;
	return (node);
}
