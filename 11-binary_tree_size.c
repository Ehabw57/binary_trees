#include "binary_trees.h"
/**
 * binary_tree_size - Calculte the nuber of nodes in a binary tree
 * @tree: Root of the tree
 * Return: Nuber of nodes in tree of 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);

	nodes++;
	nodes += binary_tree_size(tree->left);
	nodes += binary_tree_size(tree->right);

	return (nodes);
}
