#include "binary_trees.h"
/**
 * is_bigger - compare tow nubers
 * @a: First number
 * @b: Second number
 * Return: The bigger number of them
*/
size_t is_bigger(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * binary_tree_height - Find the of node on binary_tree
 * @tree: Node to find it's height
 * Return: Height of that node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (!tree)
		return (0);

	right_nodes = binary_tree_height(tree->right);
	left_nodes = binary_tree_height(tree->left);

	return (is_bigger(right_nodes + 1, left_nodes + 1));

}

/**
 * binary_tree_balance - Finde the balance factor of a binary_tree
 * @tree: Pointer to the tree to find it's factor
 * Return: The balnce factor of the tree or NULL otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
