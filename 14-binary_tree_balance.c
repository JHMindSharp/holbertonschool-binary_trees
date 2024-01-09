#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures that balance factor of a tree
 * @tree: pointer to the root node
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
