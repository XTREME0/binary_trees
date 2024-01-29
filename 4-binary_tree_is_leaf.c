#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: parent node
 *@value: int value in node
 * Return: pointer to node or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->right && !node->left)
		return (1);
	return (0);
}
