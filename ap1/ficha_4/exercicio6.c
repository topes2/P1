#include <stdio.h>
void main(){
    float a,x,y,epi;
    epi = 0.0001;
    printf("Insira o numero\n");
    scanf("%f",&a);
    x = a/2;
    y = (x+a/x)/2;
    do{
        x = y;
        y = (x+a/x)/2;
    } while ( (y-x)*(y-x) >= epi*epi);
    printf("A raiz quadrada é %f\n",y);
}