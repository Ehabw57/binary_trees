#include "binary_trees.h"
/**
 * binary_tree_depth - Finds the depth of the cureent node
 * @tree: node to find its depth
 * Return: depth level or 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	i++;
	i += binary_tree_depth(tree->parent);

	return (i--);

}

