#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *@tree: the tree
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL;
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL;
	}
	free(tree);
}
