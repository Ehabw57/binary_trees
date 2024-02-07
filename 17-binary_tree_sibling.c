#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node to find it's sibling
 * Return: Pointer to the sibling node of Null other wise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

