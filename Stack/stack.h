#ifndef STACK_H
#define STACK_H
#define S_Emt_TYPE int
typedef struct Node{
    S_Emt_TYPE value;
    struct Node *next;
}SNode;
typedef SNode *PtrToSNode;
typedef PtrToSNode Stack;
Stack CreateStack(Stack S);
int S_IsEmpty(Stack S);
void DeleteStack(Stack S);
void Push(Stack S,S_Emt_TYPE X);
void Pop(Stack S);
S_Emt_TYPE Top(Stack S);
#endif // STACK_H
