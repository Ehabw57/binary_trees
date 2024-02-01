#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts how many leaves in the binary_tree
 * @tree: Root of the tree
 * Return: Number of leaves in the tree or 0 otherwise
 */
size_t binary_tree_leaves(binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
