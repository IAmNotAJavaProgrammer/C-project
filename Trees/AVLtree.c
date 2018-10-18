#include <stdio.h>
#include <stdlib.h>
#include <AVLtree.h>

AVLTree CreateAVLTree ( AVLTree T ){
    return  NULL;
}

AVLTree AVL_MakeEmpty ( AVLTree T ){
    if( T != NULL){
        AVL_MakeEmpty( T ->left );
        AVL_MakeEmpty( T ->right );
        free ( T );
    }
    return NULL;
}

Position AVL_Find ( AVL_EmtType X , AVLTree T ){
    Position P =NULL;
    if( T == NULL ){
        P = NULL;
    }
    if( X > T ->Element ){
        P = AVL_Find( X , T -> right );
    }else if( X < T ->Element ){
        P = AVL_Find( X , T ->left );
    }else{
        P = T;
    }
    return P;
}

Position AVL_FindMin ( AVLTree T ){
    Position P = NULL;
    if( T == NULL ){
        P = NULL;
    }else if(T -> left == NULL ){
        P =T;
    }else{
        P = AVL_FindMin( T->left );
    }
    return P ;
}

Position AVL_FindMax ( AVLTree T ){
    Position P = NULL;
    if( T == NULL ){
        P = NULL;
    }else if(T -> right == NULL ){
        P =T;
    }else{
        P = AVL_FindMin( T->right );
    }
    return P ;
}
static int Height ( Position P ){
    int retn;
    if( P ==NULL ){
        retn =-1;
    }else{
        retn = P->height;
    }
    return retn;
}
int Max ( int a , int b ){
    return a>b?a:b;
}
static Position SingleRotateWithLeft ( Position K2 ){
    Position  K1 = K2 ->left;
    K2 ->left = K1 ->right;
    K1 ->right = K2;
    K2 ->height = Max( Height(K2 -> left) , Height( K2 -> right ) ) + 1;
    K1 ->height = Max( Height(K1 -> left ) , K2 -> height ) + 1;
    return K1;
}

static Position SingleRotateWithRight ( Position K2 ){
    Position K1 = K2 -> right;
    K2 ->right = K1 ->left;
    K1 -> left = K2;
    K2 ->height = Max( Height(K2 -> left) , Height( K2 -> right ) ) + 1;
    K1 ->height = Max( Height(K1 -> left ) , K2 -> height ) + 1;
    return K1;
}

static Position DoubleRotateWithLeft ( Position K3 ){
    K3 ->left = SingleRotateWithRight( K3 ->left );
    return SingleRotateWithLeft( K3 );
}

static Position DoubleRotateWithRight ( Position K3 ){
    K3 ->right = SingleRotateWithLeft( K3 -> right );
    return SingleRotateWithRight( K3 );
}

AVLTree AVL_Insert ( AVL_EmtType X ,AVLTree T ){
    if( T == NULL ){
        T = malloc( sizeof ( AVLNode ) );
        if( T == NULL ){
            printf( "malloc failed!" );
            exit ( -1 );
        }else{
            T -> Element = X;
            T -> height = 0;
            T -> left = T -> right = NULL;
        }
    }else if( X < T -> Element ){
        T -> left =AVL_Insert( X , T -> left );
        if( Height( T ->left ) - Height( T -> right ) == 2 ){
            if( X < T -> left -> Element ){
                T = SingleRotateWithLeft( T );
            }else{
                T = DoubleRotateWithLeft( T );
            }
        }
    }else if( X > T -> Element ){
        T -> right =AVL_Insert( X , T -> right );
        if( Height( T -> right ) - Height( T -> left ) == 2 ){
            if( X > T -> right -> Element ){
                T = SingleRotateWithRight( T );
            }else {
                T = DoubleRotateWithRight( T );
            }
        }
    }
    T -> height = Max(Height( T -> left ) , Height( T ->right ) ) + 1;
    return T;
}

AVLTree AVL_Delete (AVL_EmtType X , AVLTree T );
AVLTree AVL_Retrieve ( Position P );
