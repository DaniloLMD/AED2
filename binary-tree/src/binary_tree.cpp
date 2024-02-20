#include "../include/binary_tree.hpp"
#include <iostream>

struct Node{
    int val;
    Node* left;
    Node* right;
    Node* pai;
};

Tree* Tree_New(int val){
    Tree* t = (Tree*) malloc(sizeof(Tree));
    t->val = val;
    t->left = NULL;
    t->right = NULL;
    t->pai = NULL;
    return t;
}

/**
 * @brief adiciona um elemento na arvore binaria
 * @return Um ponteiro de Tree para a raiz da arvore
*/
Tree* Tree_Insert(Tree* t, int val){
    if(t == NULL)
        t = Tree_New(val);

    else if (val > t->val)
        t->right = Tree_Insert(t->right, val);

    else 
        t->left = Tree_Insert(t->left, val);

    return t;
}   

/**
 * @brief procura se um elemento existe na arvore
 * @return True, caso encontrou, False caso contrario
*/
bool Tree_Find(Tree* t, int val){
    return false;
}

/**
 * @brief remove o primeiro elemento encontrando na arvore
 * @return void
*/
void Tree_Remove(Tree* t, int val);

/**
 * @brief printa os elementos de uma arvore de forma ordenada
*/
void Tree_Ordered_Print(Tree* t){
    if(t == NULL)
        return;

    Tree_Ordered_Print(t->left);
    std::cout << t->val << "\n";
    Tree_Ordered_Print(t->right);
}