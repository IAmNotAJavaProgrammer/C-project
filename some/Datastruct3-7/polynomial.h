#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <stdio.h>
typedef struct PNode *PtrToPNode;

typedef struct PNode {
    int Coef;
    int Exp;
    PtrToPNode *next;
} PNode;

typedef PtrToPNode Polynomial;
typedef PtrToPNode Position;
void Insert(Polynomial Poly );
Polynomial MultPolynomial( const Polynomial Poly1 , const Polynomial Poly2 );
Polynomial AddPolynomial( const Polynomial Poly1 , const Polynomial Poly2 );
#endif // POLYNOMIAL_H
