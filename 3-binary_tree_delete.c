#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary treee
 * @tree: The binary tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
