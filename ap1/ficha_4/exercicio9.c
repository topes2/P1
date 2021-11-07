#include <stdio.h>
int a,b,c;
int f1(int num);
void main(){
    printf("Valor de a  ");
    scanf("%d",&a);
    printf("Valor de b  ");
    scanf("%d",&b);
    c = a;
    f1(a);
    f1(b);
}

int f1(int num){
    do{
    if ( c%num == 0){
        printf("%d\n",c);
    }
    c++;
    }while(c <= 50);
}