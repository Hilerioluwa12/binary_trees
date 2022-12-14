#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Node Parent
 * @value: Value of the node
 * Return: binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->parent = parent;
	root->left = NULL;
	root->right = NULL;
	root->n = value;

	return (root);
}
