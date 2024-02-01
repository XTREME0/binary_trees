#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *@tree: the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		lh = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		rh = binary_tree_balance(tree->right) + 1;
	return (lh - rh);
}
