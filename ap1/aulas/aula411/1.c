#include <stdio.h>
int a,b,i;
void main(){
    i = a+b;  //como nao damos um valor a a nem a b nao damos a i logo nao podemos saber que valor i tem
    while (i <0){
        i++;
    }
}