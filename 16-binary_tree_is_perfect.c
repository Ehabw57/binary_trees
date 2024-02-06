#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks weather a binary tree is perfect of not
 * @tree: Root node of the tree to check
 * Return: 1 if the tree is perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes = 0;
	int right_nodes = 0;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (left_nodes == right_nodes)
		return (1);
	return (0);

}

/**
 * binary_tree_nodes - Clac the number of nodes that has at least 1 chiled
 * @tree: Root of the tree
 * Return: Number of all nudes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes + 1);
}
