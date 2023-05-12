#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as rightchild
 * @parent: pointer to the parent node of right child
 * @value: value to store in right child
 * Return: pointer to rightchild or NULL on failur
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightChild = malloc(sizeof(binary_tree_t));
	if (rightChild == NULL)
		return (NULL);

	rightChild->n = value;
	rightChild->left = NULL;
	rightChild->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = rightChild;
		rightChild->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = rightChild;
		rightChild->right = temp;
		temp->parent = rightChild;
	}

	return (rightChild);
}