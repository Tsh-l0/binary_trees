#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree and counts the
 * number of leaves
 *
 * Return: 0 if tree is NULL.
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (num_leaves += 1);

	num_leaves += binary_tree_leaves(tree->left);
	num_leaves += binary_tree_leaves(tree->right);

	return (num_leaves);
}
