#include "binary_trees.h"
/**
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	const binary_tree_t *current = tree;

	if (current == NULL)
		return;

	(*func)(current->n);	
	binary_tree_preorder(current->left, func);
	binary_tree_preorder(current->right, func);
}
