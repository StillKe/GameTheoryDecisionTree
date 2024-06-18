#include "decision_tree.h"

/**
 * create_node - Creates a decision tree node
 * @decision: Decision at this node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
decision_tree_t *create_node(char *decision)
{
    decision_tree_t *new_node = malloc(sizeof(decision_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->decision = decision;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

/**
 * print_decisions - Prints all decisions in the tree (preorder traversal)
 * @tree: Pointer to the root node of the tree to print
 */
void print_decisions(const decision_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("%s\n", tree->decision);
    print_decisions(tree->left);
    print_decisions(tree->right);
}

/**
 * free_tree - Frees the memory allocated for the tree
 * @tree: Pointer to the root node of the tree to free
 */
void free_tree(decision_tree_t *tree)
{
    if (tree == NULL)
        return;

    free_tree(tree->left);
    free_tree(tree->right);
    free(tree);
}