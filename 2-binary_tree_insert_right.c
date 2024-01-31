#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new right node to the parent
 * if parent's right is empty otherwise swap the right with the new right
 * @parent: Pointer to the parent node
 * @value: Value to add in the new right node
 * Return: Pointer to the new right node of NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->right = NULL;
	right_node->parent = parent;
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}
	else
	{
		parent->right = right_node;
		right_node->right = NULL;
	}
	return (right_node);
}

