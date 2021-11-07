#include <stdio.h>
int a,b,c;
int f2(int num, int num2);
void main(){
    c = 1;
    printf("Valor de a  ");
    scanf("%d",&a);
    printf("Valor de b  ");
    scanf("%d",&b);
    f2(a,b);
}

int f2(int num, int num2){
    do{
    if ( c%num == 0 && c%num2 == 0){
        printf("%d : %d,%d\n",c,num,num2);
    }else if (c%num == 0){
        printf("%d : %d\n",c,num);
    } else if (c%num2 == 0){
        printf("%d : %d\n",c,num2);
    }
    c++;
    }while(c <= 50);
}