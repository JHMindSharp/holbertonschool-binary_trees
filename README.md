![Binarytree](https://image.noelshack.com/fichiers/2024/02/1/1704711654-dall-e-2024-01-08-12-00-13-a-vintage-style-photograph-featuring-an-old-fashioned-computer-on-a-wooden-desk-the-computer-screen-displays-a-binary-tree-data-structure-with-clear.jpg)
# Binary Tree Manipulation Project in C

## Project Overview

The Binary Tree Manipulation Project in C is a comprehensive exploration and implementation of binary trees, one of the most fundamental data structures in computer science. This project covers various aspects of binary tree manipulation, including creation, traversal, measurement, and analysis. It is designed to provide a deep understanding of how binary trees work and how they can be utilized in C programming.

## Features

- **Creation and Insertion**: Functions to create a binary tree and insert nodes as left or right children.
- **Deletion**: Safely delete an entire binary tree to prevent memory leaks.
- **Node Validation**: Check if a node is a leaf or the root, enhancing tree analysis capabilities.
- **Traversal Techniques**: Implementations of pre-order, in-order, and post-order traversals for tree exploration.
- **Tree Metrics**: Calculate the height, depth, and size of a tree, providing insights into its structure.
- **Node Counting**: Count the number of leaves and nodes with at least one child, useful for tree analysis.
- **Balance Factor and Perfection**: Determine the balance of a tree and check if it is perfect, which is crucial for certain applications like AVL trees.
- **Sibling and Uncle Identification**: Functions to find siblings and uncles of a node, aiding in understanding tree relationships.

## File Descriptions

- `binary_trees.h`: Header file with all function prototypes and the basic structure of a binary tree.
- `binary_tree_print.c`: Utility function to print a binary tree visually.
- **Files 0 to 18**: Each contains a specific function implementation, ranging from basic operations like node creation (`0-binary_tree_node.c`) to more advanced ones like checking if a tree is perfect (`16-binary_tree_is_perfect.c`).

## Compilation and Usage

Compile the project using gcc with flags `-Wall -Wextra -Werror -pedantic`.
Example: `gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-binary_tree_node.c -o 0-node`
Run the executable generated (e.g., `./0-node`) to see the output of the specific functionality.

## Contributions and License

This project is part of the Holberton School curriculum.
Contributions to this project are welcome. Please ensure your code adheres to the project's coding standards and submit a pull request for review.
This project is licensed under the MIT License.

## Authors

- BINET Nolan ([GitHub](https://github.com/Jeykop22))
- HUYBRECHTS Jonathan ([GitHub](https://github.com/Miniknacky))
