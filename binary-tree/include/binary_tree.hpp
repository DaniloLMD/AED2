#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef struct Node Tree;

Tree* Tree_Insert(Tree* t, int val);
bool Tree_Find(Tree* t, int val);
void Tree_Remove(Tree* t, int val);

void Tree_Ordered_Print(Tree* t);

#endif