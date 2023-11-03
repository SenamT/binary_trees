#include "binary_trees.h"

/**
 * binary_tree_node - this will create a binary tree's node
 * @parent: this will be the parent nodes pointer
 * @value: this will be the value which needs to be put in the new node
 *
 * Return: On faluire - NULL
 *         Otherwise - a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
