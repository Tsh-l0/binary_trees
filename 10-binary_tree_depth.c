#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Pointer of the node to be measured for depth
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth_node++;
		tree = tree->parent;
	}

	return (depth_node);
}
