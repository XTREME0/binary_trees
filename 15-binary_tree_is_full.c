#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *@node: the node
 * Return: 1 if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->right && !node->left)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *@tree: the tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (!l || !r)
		return (0);
	return (1);
}
