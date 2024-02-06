#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_full - Check wheater a binary tree is full or not
 * @tree: Pointer to the root of the tree
 * Return: 1 if the tree full 0 otherwise
/* Function to check if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
	}
	return (0);
}

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
