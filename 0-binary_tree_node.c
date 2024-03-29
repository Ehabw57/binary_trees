#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates anew bianry tree node
 * @parent: a pointer to the parent node
 * @value: value to add inside the new node
 * Return: pointer to the new node or NULL on faliuer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

			if (node == NULL)
			{
			return (NULL);
			}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
