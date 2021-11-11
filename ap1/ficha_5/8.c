#include <stdio.h>
#include <math.h>
int a,b,c,d;
void main(){
    printf("Insira o numero de 3 digitos");
    scanf("%d",&a);
    b = a/100;
    c = (a - (b*100))/10;
    d = (a - (b*100) - (c*10));
    if (a==(pow(b,3)+pow(c,3)+pow(d,3))){
        printf("É igual a soma dos cubos.\n");
    }else{
        printf("No can do hot stuff\n");
    }
}