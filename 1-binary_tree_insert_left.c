#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Parent of the node
 * @value: value of the node
 * Return: New node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (parent == NULL || new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = new_node;
		new_node->left = temp;
		parent->left = new_node;
		temp->left = NULL;
	}
	else
	{
		new_node->left = NULL;
		parent->left = new_node;
	}

	return (new_node);
}
