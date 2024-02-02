#include "binary_trees.h"
/**
 * binary_tree_nodes - Clac the number of nodes that has at least 1 chiled
 * @tree: Root of the tree
 * Return: Number of node that has at least 1 child node or 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes + 1);
}
