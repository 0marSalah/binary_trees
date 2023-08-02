#include "binary_trees.h"
/** 
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: If tree is NULL, your function must return 0, else return depth.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t lh = 0, rh = 0;

  if (tree)
  {
    if (tree->parent)
    {
      lh = tree->parent->left ? 1 + binary_tree_depth(tree->parent) : 0;
      rh = tree->parent->right ? 1 + binary_tree_depth(tree->parent) : 0;
      return ((lh > rh) ? lh : rh);
    }
    return (0);
  }
  return (0);
}
