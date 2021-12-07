#include <stdio.h>

int acker(int m,int n);

void main(){
    int m,n;
    printf("Insira os numeros");
    scanf("%d %d",&m,&n);
    printf("%d",acker(m, n));
}

int acker(int m,int n){
    if (m ==0)
    return(n+1);
    else if(m>0 && n==0)
    return(acker(m-1,1));
    else if(m>0 && n>0)
    return((acker(m-1,acker(m,n-1))));
}