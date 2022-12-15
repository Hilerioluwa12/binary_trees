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

int main(void)
{
	    binary_tree_t *root;

	        root = binary_tree_node(NULL, 98);
		    root->left = binary_tree_node(root, 12);
		        root->right = binary_tree_node(root, 402);
			    binary_tree_insert_right(root->left, 54);
			        binary_tree_insert_right(root, 128);
				        binary_tree_delete(root);
					    return (0);
}
