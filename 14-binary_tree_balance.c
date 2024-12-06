#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height_l = binary_tree_height(tree->left);
	size_t height_r = binary_tree_height(tree->right);

	return (((height_l > height_r) ? height_l : height_r) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance
 * facctor
 *
 * Return: Balance factor of the binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int height_l = (tree->left != NULL) ? (int)binary_tree_height(tree->left) : 0;
	int height_r = (tree->right != NULL) ? (int)binary_tree_height
						(tree->right) : 0;

	return (height_l - height_r);
}
