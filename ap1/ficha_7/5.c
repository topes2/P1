#include <stdio.h>

int mdc(int m, int n);

void main(){
    int m,n;
    printf("Insira o 1 numero");
    scanf("%d",&m);
    printf("Insira o segundo numero");
    scanf("%d",&n);
    printf("%d",mdc(m,n));
}

int mdc(int m,int n){
    if (n==m)
    return m;
    else if(m>n)
    return(mdc(m-n,n));
    else if (m<n);
    return(mdc(m,n-m));
}