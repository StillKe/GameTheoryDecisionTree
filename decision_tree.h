#ifndef DECISION_TREE_H
#define DECISION_TREE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct decision_tree_s
{
    char *decision;
    struct decision_tree_s *left;
    struct decision_tree_s *right;
} decision_tree_t;

decision_tree_t *create_node(char *decision);
void print_decisions(const decision_tree_t *tree);
void free_tree(decision_tree_t *tree);

#endif /* DECISION_TREE_H */