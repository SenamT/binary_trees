#include "binary_trees.h"

/**
 * binary_tree_postorder - this will go through a binary tree using post-order traversal
 * @tree: this is a pointer for the root node of the tree to be traversed
 * @func: this is the pointer for the function to call each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
