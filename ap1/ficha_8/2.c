#include <stdio.h>
int conta_elementos(int vec1[],int vec2[], int sz1, int sz2);
int check(int a, int b);

void main(){
    int a[3]={1,2,2}, \
    b[5]= {1,2,3,4,5}, \
    c[2]={2,4}, \
    d[2]={7,8};
    printf("%d",conta_elementos(b ,c ,5 ,2));
}

int conta_elementos(int vec1[],int vec2[], int sz1, int sz2){
    int i = sz1-1, i2 = sz2,x = 0;
    do{
        do{
            i2--;
            x = x + check(vec1[i],vec2[i2]);
        }while (i2 >= 0);
        i--;
        i2 = sz2;
    }while(i != 0);
    return x;
}

int check(int a,int b){
    if (a == b){
        printf("encontrado em common %d\n",a);
        return 1;
    }
}
//maneira de fazer, vou comparar um dos numeros de um array a todos do outro e vou descendo assim
