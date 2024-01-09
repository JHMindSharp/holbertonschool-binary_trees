#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
