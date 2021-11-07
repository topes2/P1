#include <stdio.h>
int a,b,c;
void main(){
    printf("Insira o numero\n");
    scanf("%d",&a);
    b = 1;
    c = 1;
    if (a <= 0){
        printf("Numero invalido, tem de ser maior que 0");
    } else if(a > 0){
        do{
            b = b * c;
            b; 
            c++;
        }while (c <= a);
    }
    printf("O fatorial é %d",b);
}

//tens de fazer o 6*5*4*3*2*1
//b = 1, b = b *b