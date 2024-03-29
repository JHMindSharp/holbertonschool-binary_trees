#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance.
 *
 * Return: The balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = binary_tree_height(tree->left) + 1;
	else
		height_left = 0;

	if (tree->right)
		height_right = binary_tree_height(tree->right) + 1;
	else
		height_right = 0;

	return (height_left - height_right);
}
