#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the
 * number of nodes
 *
 * A NULL pointer is not a node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t child_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		child_node += ((tree->left || tree->right) ? 1 : 0);
		child_node += binary_tree_nodes(tree->left);
		child_node += binary_tree_nodes(tree->right);
		return (child_node);
	}
}
