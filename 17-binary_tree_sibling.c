#include "binary_trees.h"

/**
 * binary_tree_sibling - this is a function that finds the sibling of a node
 * @node: this is the pointer for the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 *         If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
