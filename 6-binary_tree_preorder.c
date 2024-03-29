#include "binary_trees.h"
/**
 * binary_tree_preorder - Traveris and print tree with preorder style
 * @tree: Pointer to the root of the tree
 * @func: Printing funciton (idk why we can't just user dirctly printf)
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	const binary_tree_t *current = tree;

	if (current == NULL || func == NULL)
		return;

	(*func)(current->n);
	binary_tree_preorder(current->left, func);
	binary_tree_preorder(current->right, func);
}
