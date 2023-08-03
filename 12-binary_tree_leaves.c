#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, your function must return 0, else return leaves.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t count = 0;

    if (tree)
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        count += binary_tree_leaves(tree->left);
        count += binary_tree_leaves(tree->right);
        return (count);
    }
    return (0);
}
