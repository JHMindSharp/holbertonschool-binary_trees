#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 *
 * Description: This function checks if a given node is a leaf in a
 * binary tree.
 * A leaf node is a node that has no children (left or right). If the input
 * `node` is NULL, it returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
