#include "decision_tree.h"

int main(void)
{
    decision_tree_t *root;

    
    root = create_node("Start Game");

    root->left = create_node("Go Left");
    root->right = create_node("Go Right");

    
    root->left->left = create_node("Pick up Sword");
    root->left->right = create_node("Pick up Shield");

    root->right->left = create_node("Fight Monster");
    root->right->right = create_node("Run Away");

   
    root->left->left->left = create_node("Win Battle");
    root->left->left->right = create_node("Lose Battle");

    root->left->right->left = create_node("Defend Successfully");
    root->left->right->right = create_node("Shield Breaks");

    root->right->left->left = create_node("Defeat Monster");
    root->right->left->right = create_node("Get Injured");

    root->right->right->left = create_node("Escape Safely");
    root->right->right->right = create_node("Caught by Monster");

    
    print_decisions(root);

 
    free_tree(root);

    return 0;
}