#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->right = new;
	}
	else
		parent->right = new;

	return (new);
}
