#ifndef AVLTREE_H
#define AVLTREE_H
#define AVL_EmtType int
typedef struct AVLNode {
    AVL_EmtType Element;
    struct AVLNode *left;
    struct AVLNode *right;
    int height;
} AVLNode;
typedef AVLNode *Position;
typedef  AVLNode *AVLTree;
AVLTree CreateAVLTree ( AVLTree T );
AVLTree AVL_MakeEmpty ( AVLTree T );
Position AVL_Find ( AVL_EmtType X , AVLTree T );
Position AVL_FindMin ( AVLTree T );
Position AVL_FindMax ( AVLTree T );
AVLTree AVL_Insert ( AVL_EmtType X ,AVLTree T );
AVLTree AVL_Delete (AVL_EmtType X , AVLTree T );
AVLTree AVL_Retrieve ( Position P );
static int Height ( Position P );
static Position SingleRotateWithLeft ( Position K2 );
static Position SingleRotateWithRight ( Position K2 );
static Position DoubleRotateWithLeft ( Position K3 );
static Position DoubleRotateWithRight ( Position K3 );
#endif // AVLTREE_H
