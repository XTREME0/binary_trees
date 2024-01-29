#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: parent node
 *@value: int value in node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	} else
	{
		node = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = node;
		node->parent = parent->right;
	}
	return (parent->right);
}
