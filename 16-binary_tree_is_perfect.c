#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
