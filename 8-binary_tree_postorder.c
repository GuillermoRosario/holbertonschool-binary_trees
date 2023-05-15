#include "binary_trees.h"
/**
 * binary_tree_postorder - go through binary tree using preorder traversal
 * @tree: pointer to root node
 * @func: pointer to function call for each node
 * Return: if tree or func is NULL do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}