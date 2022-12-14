#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *
 * @parent: Parent of the node
 * @value: value of the node
 * Return: New Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (parent == NULL || new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->n = value;

	if (parent->left != NULL)
	{
		temp = parent->right;
		temp->parent = new_node;
		new_node->right = temp;
		parent->right = new_node;
		temp->right = NULL;
	}
	else
	{
		new_node->right = NULL;
		parent->right = new_node;
	}

	return (new_node);
}
