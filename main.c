#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    if (root == NULL)
    {
        printf("Erreur lors de la création du nœud\n");
        return (1);
    }


    printf("Le nœud a été créé avec succès !\n");
    return (0);
}
