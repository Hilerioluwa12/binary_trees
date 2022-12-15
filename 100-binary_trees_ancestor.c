#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer of the first node
 * @second: Pointer of the second node
 *
 * Return: Pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *fparent, *sparent;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	fparent = first->parent;
	sparent = second->parent;

	if (first == sparent || !fparent || (!fparent->parent && sparent))
		return (binary_trees_ancestor(first, sparent));

	else if (fparent == second || !sparent || (!sparent->parent && fparent))
		return (binary_trees_ancestor(fparent, second));

	return (binary_trees_ancestor(fparent, sparent));
}
