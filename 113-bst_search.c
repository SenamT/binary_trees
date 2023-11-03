#include "binary_trees.h"

/**
 * bst_search - this is a function that searches for a value in a Binary Search Tree
 * @tree: this is the pointer for the root node of the BST to search
 * @value: this si the value which needs to be searched for in BST
 *
 * Return: return a pointer to the node containing a value equals to value
 *         If tree is NULL or if nothing is found, your function must return NULLOtherwise, a pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
