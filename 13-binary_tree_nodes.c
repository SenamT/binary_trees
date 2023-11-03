#include "binary_trees.h"

/**
 * binary_tree_nodes - this will count the nodes with at least 1 child in a binary tree
 * @tree: this will be a pointer for the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
