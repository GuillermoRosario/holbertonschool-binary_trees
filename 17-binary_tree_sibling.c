#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: sibling of node to be found
 * Return: sibling, else null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current;

	current = node;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (current == node->parent->left)
		return (node->parent->right);

	if (current == node->parent->right)
		return (node->parent->left);

	return (NULL);
}
