#include "binary_trees.h"

/**
 * binary_tree_leaves - this will count the leaves in a binary tree
 * @tree: this will be the pointer for the root node of the tree which leaves are counted
 *
 * Return: If tree is NULL, the function must return 0,A NULL pointer is not a leaf 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
