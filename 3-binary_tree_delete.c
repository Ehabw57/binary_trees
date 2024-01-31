#include "binary_trees.h"
/**
 * binary_tree_delete - Clears a whole binary tree
 * @tree: pointer to the root node of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *clear = tree;

	if (tree == NULL)
		return;

	binary_tree_delete(clear->left);
	binary_tree_delete(clear->right);
	free(clear);
}
