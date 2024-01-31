#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks weather a spacific node is leaf or not
 * @node: Node to check
 * Return: 1 if the node is leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left || node->right))
		return (0);
	return (1);
}
