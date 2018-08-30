#include <stdio.h>
#include"polynomial.h"

int main()
{
    printf("Hello World!\n");
    return 0;
}
Polynomial MultPolynomial( const Polynomial Poly1 , const Polynomial Poly2 ){

}
Polynomial AddPolynomial( const Polynomial Poly1 , const Polynomial Poly2 ){
    Polynomial retn = Create();
    Position P = Poly1 ->next , tmp1 , tmp2 = Poly2 ->next;
    for( tmp = Poly1 ->next ; tmp1 != NULL ; tmp1 = tmp1 ->next ){
        for( tmp2 ; tmp2 ！= NULL ; tmp2 =tmp2 ->next){
            if(tmp1 ->Exp < tmp2 ->Exp ){
                continue;
            } else if( == ){
                1 + 2；
                add()
            }else {
                add();
            }
        }
    }
}
