#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *@parent: parent node
 *@value: int value in node
 * Return: pointer to node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return NULL;

	node->n = value;
	node->parent = parent;
	return node;
}
