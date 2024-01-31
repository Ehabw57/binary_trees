#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new left node to the parent
 * if parent's left is empty otherwise swap the left with the new left
 * @parent: Pointer to the parent node
 * @value: Value to add in the new left node
 * Return: Pointer to the new left node of NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->right = NULL;
	left_node->parent = parent;
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}
	else
	{
		parent->left = left_node;
		left_node->left = NULL;
	}
	return (left_node);
}

