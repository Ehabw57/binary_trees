#include "binary_trees.h"
/**
 * is_bigger - compare tow nubers
 * @i: First number
 * @j: Second number
 * Return: The bigger number of them
 */
size_t is_bigger(size_t j, size_t i)
{
	if (i > j)
		return (i);
	else
		return (j);
}

/**
 * binary_tree_height - Find the of node on binary_tree
 * @tree: Node to find it's height
 * Return: Height of that node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		i += binary_tree_height(tree->left);
		i++;
	}
	if (tree->right)
	{
		j += binary_tree_height(tree->right);
		j++;
	}
	return (is_bigger(j, i));
}


