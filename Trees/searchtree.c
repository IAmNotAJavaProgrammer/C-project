#include <searchtree.h>
#include <stdio.h>
#include <stdlib.h>
searchTree CreateSearchTree (searchTree T ){
    return NULL;
}
searchTree ST_MakeEmpty ( searchTree T ){
    if(T != NULL){
        ST_MakeEmpty( T ->left );
        ST_MakeEmpty( T ->right );
        free( T );
    }
    return NULL;
}
Position ST_Find( EmtType X , searchTree T ) {
    Position P = NULL;
    if( T == NULL ){
       // return NULL;
    }
    if( X < T ->Element ){
        P = ST_Find( X , T ->left );
    }else if( X > T ->Element ){
        P = ST_Find( X , T ->right );
    }else{
        P = T;
    }
    return P;
}
Position ST_FindMin ( searchTree T ){
    Position retn =NULL;
    if( T != NULL ){
        if( T ->left ==NULL ){
            retn = T;
        }else{
            retn = ST_FindMin( T ->left );
        }
    }
    return retn;
}
Position ST_FindMax ( searchTree T ){
    Position retn = NULL;
    if( T != NULL ){
        if( T->right ==NULL ){
            retn = T;
        }else{
            retn = ST_FindMax( T ->right );
        }
    }
    return retn;
}
searchTree ST_Insert( EmtType X , searchTree T ){
    if( T == NULL ){
        T = malloc(sizeof ( TreeNode));
        if( T == NULL ){
            printf( "malloc failed " );
        }else{
            T ->Element =X;
            T ->left = T ->right =NULL;
        }
    }else{
        if( X < T->Element ){
            T ->left = ST_Insert( X , T ->left );
        }else if( X > T->Element ){
            T ->right = ST_Insert( X , T ->right );
        }
    }
    return T;
}
searchTree ST_Delete( EmtType X , searchTree T ){
    Position tmp;
    if( T == NULL){
        printf( "Empty searchtree!" );
    }else if( X < T ->Element ){
        T ->left = ST_Delete( X , T ->left );
    }else if( X > T ->Element ){
        T ->right = ST_Delete( X , T ->right );
    }else if( T ->left && T ->right ){
        tmp = ST_FindMin( T ->right );
        T ->Element = tmp ->Element;
        T ->right = ST_Delete( T ->Element , T ->right );
    }else {
        tmp = T;
        if( T ->left == NULL ){
            T = T ->right;
        }else if( T ->right == NULL ){
            T = T ->left;
        }
        free ( tmp );
    }
    return T;
}

EmtType ST_Retrieve ( Position P ){
    return P ->Element;
}
/*
void preorderPrintTree (  , searchTree T ){ //第一个参数是函数指针，传入指针函数以便于兼容不同的是数据类型
    if(T == NULL ){
        printf( "empty searchTree" );
        exit( -1 );
    }else{
        printElement( T ->Element );
        preorderPrintTree(  , T ->left);
        preorderPrintTree(  , T ->right );
    }
}
void inorderPrintTree (searchTree T ){
    if(T == NULL ){
        printf( "empty searchTree" );
        exit( -1 );
    }else{
        preorderPrintTree(  , T ->left);
        printElement( T ->Element );
        preorderPrintTree(  , T ->right );
    }
}
void postorderPrintTree (searchTree T ){
    if(T == NULL ){
        printf( "empty searchTree" );
        exit( -1 );
    }else{
        preorderPrintTree(  , T ->left);
        preorderPrintTree(  , T ->right );
        printElement( T ->Element );
    }
}
void levelorderPrintTree (searchTree T ){
    Position tmp;
    Queue Q = CreativeQueue( Q );
    EnQueue ( T );
    for( Q !IsEmpty( Q ) ){
        tmp = FrontAndDeQueue ( Q );
        printElement( tmp );
        if( tmp ->left != NULL )
            EnQueue( tmp ->left);
        if( tmp ->right != NULL )
            EnQueue( tmp ->right );
    }
}
*/
