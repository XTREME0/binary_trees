#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: parent node
 *@value: int value in node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	} else
	{
		node = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = node;
		node->parent = parent->left;
	}
	return (parent->left);
}
