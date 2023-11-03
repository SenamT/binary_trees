#include "binary_trees.h"

/**
 * binary_tree_depth - this will measure the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth. this is the pointer for the node which will measure the depth
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
