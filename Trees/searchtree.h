#ifndef SEARCHTREE_H
#define SEARCHTREE_H
#define EmtType int
typedef struct TreeNode{
    EmtType Element;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;
typedef TreeNode *Position;
typedef TreeNode *searchTree;
searchTree CreateSearchTree (searchTree T );
searchTree ST_MakeEmpty ( searchTree T );
Position ST_Find( EmtType X , searchTree T );
Position ST_FindMin ( searchTree T );
Position ST_FindMax ( searchTree T );
searchTree ST_Insert( EmtType X , searchTree T );
searchTree ST_Delete( EmtType X , searchTree T );
EmtType ST_Retrieve ( Position P );
void preorderPrintTree ( searchTree T );
void inorderPrintTree (searchTree T );
void postorderPrintTree (searchTree T );
void levelorderPrintTree (searchTree T );
#endif // SEARCHTREE_H
