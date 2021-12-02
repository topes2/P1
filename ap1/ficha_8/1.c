#include <stdio.h>
int verifica_ordem(int vec[], int sz);

void main(){
    int a[3]={1,2,2}, \
    b[5]= {1,2,3,4,5}, \
    c[2]={2,4}, \
    d[2]={7,8};
    printf("%d\n",verifica_ordem(a,2));
    printf("%d\n",verifica_ordem(b,4));
    printf("%d\n",verifica_ordem(c,1));
    printf("%d\n",verifica_ordem(d,1));
}

int verifica_ordem(int vec[],int sz){
    int i = sz-1;
    if (vec[sz] - vec[i] < 0){
        return 0;
    }else if (i == 0){
        return 1;
    }else{
        verifica_ordem(vec,sz-1);
    }
}
// ver se o array esta em ordem