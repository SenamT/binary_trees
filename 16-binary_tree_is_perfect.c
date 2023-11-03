#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - this will check if a binary tree is perfect
 * @node: is th pointer for the node  to access
 *
 * Return: If tree is NULL, your function must return 0
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - this will return a given node in a binary tree's depth
 * @tree: this is the pointer for the node to measure its depth
 *
 * Return: the nodes depth
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - this will return a binary tree's leaf
 * @tree: this is the pointer for the root node of the tree where a leaf is found
 *
 * Return: a pointer from first encountered leaf
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - this will check if a binary tree is perfect recursively
 * @tree: this is the pointer for the root node of the tree to access
 * @leaf_depth: this is the leaf's depth in the binary tree
 * @level: this is the current node's level
 *
 * Return: If tree is perfect 1, otherwise 0
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - this will check if a binary tree is perfect
 * @tree: this is the pointer for the root node of the tree to access
 *
 * Return: If the tree is NULL or not perfect, 0
 *         Otherwise, 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
