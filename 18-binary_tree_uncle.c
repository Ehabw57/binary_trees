#include "binary_trees.h"
/**
 * is_root - Checks weather a node is root of binary_tree or not
 * @node: Node to be checkes
 * Return: 1 if true 0 otherwise
*
*/
int is_root(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (0);
	return (1);
}
/**
 * binary_tree_uncle - Finds uncel of a node in binary_tree
 * @node: Node to find it's uncel on the tree
 * Return: Pointer to the uncel node or NULL othrewise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!is_root(node->parent))
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
