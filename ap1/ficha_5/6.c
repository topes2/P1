#include <stdio.h>
int a,b,c=1;
void main(){
    printf("Insira os numeros\n");
    scanf("%d %d",&a,&b);
    while((a*c)%b!=0){
        c++;
    }
    printf("É %d",(a*c));
}