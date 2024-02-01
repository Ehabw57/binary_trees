#include "binary_trees.h"
/**
 * binary_tree_postorder - Traveris and print tree with inord style
 * @tree: Pointer to the root of the tree
 * @func: Printing funciton (idk why we can't just user dirctly printf)
 */
void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	const binary_tree_t *current = tree;

	if (current == NULL || func == NULL)
		return;

	binary_tree_postorder(current->left, func);
	binary_tree_postorder(current->right, func);
	(*func)(current->n);
}
