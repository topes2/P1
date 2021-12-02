#include <stdio.h>
int a,c;
float b;
int soma(int a);
void main(){
    printf("Nums plz");
    scanf("%d",&a);
    soma(a);
}

int soma(int a){
    b = 0;
    while(a != 0){
    b = b + a;
    a--;
    printf("%f\n",b);
}
}