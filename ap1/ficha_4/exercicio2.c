#include <stdio.h>
#include <math.h>
int a,b,c;
void main(){
    printf("Insira o valor dos dois catetos");
    scanf("%d %d",&b,&c);
    a = pow(b,2) + pow(c,2);
    a = sqrt(a);
    printf("A hipotenusa é %d", a);
}