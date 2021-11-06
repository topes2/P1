#include <stdio.h>
int num,avsoma,avtotal,contador;
void main(){
    printf("Insira o numero1\n");
    scanf("%d",&num);
    do {
        avsoma = num +avsoma;
        contador++;
        printf("Insira o numero2\n");
        scanf("%d",&num);
    } 
    while(num != 0);
    avtotal = (avsoma / contador);
    printf("Inseriu %d e a media é %d",contador,avtotal);
}