#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to print
 *
 * Description: This function performs a pre-order traversal of the binary
 * tree starting from the given root node and prints the value of each node.
 * The tree is printed in a depth-first manner.
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		printf("%d\n", tree->n);
		binary_tree_print(tree->left);
		binary_tree_print(tree->right);
	}
}
