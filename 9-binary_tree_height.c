#include "binary_trees.h"

/** 
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree, or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
  int lh, rh;
  if (tree) {
    lh = binary_tree_height(tree->left);
    rh = binary_tree_height(tree->right);

    if (lh > rh)
      return (lh + 1);
    else
      return (rh + 1);
  } else {
    return (-1);
  }
}
