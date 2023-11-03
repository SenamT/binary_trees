#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: this will be the poibter for the node where the left-child will be inserted
 * @value: this will be the new nodes value
 *
 * Return: If parent is NULL or on failure - NULL
 *         Otherwise - a pointer to the new node
 *
 * Description: If parent already has a left-child, the new node must take its place,
 *              and the old left-child must be set as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
