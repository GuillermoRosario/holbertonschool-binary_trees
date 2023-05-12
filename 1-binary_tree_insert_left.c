#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left child of parent node
 * @parent: pointer to node which will inherit left child
 * @value: value to store in newNode
 * Return: pointer to created node or Null on failure or Null if parent Null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftChild = malloc(sizeof(binary_tree_t));
	if (leftChild == NULL)
		return (NULL);

	leftChild->n = value;
	leftChild->parent = parent;
	leftChild->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = leftChild;
		leftChild->left = NULL;
	}
	else
	{
		temp = parent->left;
		parent->left = leftChild;
		leftChild->left = temp;
		temp->parent = leftChild;
	}

	return (leftChild);
}
