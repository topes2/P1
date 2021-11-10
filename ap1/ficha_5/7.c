#include <stdio.h>
int equal(int a,int b);
int a1,a2,b1,b2,d,d1,d2;
void main(){
    printf("Insira as frações (n1, d1, n2 e d2)\n");
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    if (a2!=b2){
        d1 = b2;
        d2 = a2;
        a1 = a1*d1;
        a2 = a2*d1;
        b1 = b1*d2;
        b2 = b2*d2;
    }
    if(a2 == b2){
        d = a1 + b1;
    }
    printf("%d %d %d %d\n",a1,a2,b1,b2);
    printf("O resultado final é %d/%d\n",d,a2);
}