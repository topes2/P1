#include <stdio.h>
int a,a2,b,contador;
void main(){
    printf("Indique o numero ");
    scanf("%d", &a);
    contador = 1;
    a2 = 2*a+1;
    b=1;
    while ( contador < a2){
        if (b < a && contador < a){
            printf("%d   \n",b);
            contador = contador +1;
            b = b+1;
        }else if (b >= 0){
            printf("%d  \n",b);
            b = b-1;            
            contador = contador + 1;
       }
    }
}