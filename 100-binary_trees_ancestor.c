#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_trees_ancestor - function that checks an ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
	{
		return (binary_trees_ancestor(first, q));
	}
	else if (q == NULL || p == second || (!q->parent && p))
	{
		return (binary_trees_ancestor(p, second));
	}
	return (binary_trees_ancestor(p, q));
=======
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
>>>>>>> 80f66ff79fa8444639c037ecd653a8141c8cc6b1
}
