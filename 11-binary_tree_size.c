#include "binary_trees.h"

/**
 * binary_tree_size - this will measure the size of a binary tree
 * @tree: this is the pointer for the root node of the tree whos size needs to be measured
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
