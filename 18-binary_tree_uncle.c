#include "binary_trees.h"

/**
 * binary_tree_uncle - this is a function that finds the uncle of a node
 * @node: this is the pointer for the node for which the uncle must be found
 *
 * Return: If node is NULL, return NULL
 *         If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
