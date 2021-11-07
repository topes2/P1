#include <stdio.h>
void main(){
    int a,b,c,d;
    b = 0;
    c = 0;
    do{
        printf("insira o numero");
        scanf("%d",&a);
        b = b+a;
        c++;
        printf("%d %d %d", a, b, c);
    } while (a > 0);
    c--;
    printf("%d %d %d", a, b, c);
    d = b/c;
    printf("A media é %d",d);
}