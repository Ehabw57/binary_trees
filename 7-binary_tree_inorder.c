#include "binary_trees.h"
/**
 * binary_tree_inorder - Traveris and print tree with inord style
 * @tree: Pointer to the root of the tree
 * @func: Printing funciton (idk why we can't just user dirctly printf)
 */
void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	const binary_tree_t *current = tree;

	if (current == NULL || func == NULL)
		return;

	binary_tree_inorder(current->left, func);
	(*func)(current->n);
	binary_tree_inorder(current->right, func);
}
