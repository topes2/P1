#include <stdio.h>

float inserir(int n,int h);
float duplicate(float v[],int n,int h);

void main(){
    int n,h;
    printf("Quantos numeros quer inserir?");
    scanf("%d",&n);
    printf("Que numero?");
    scanf("%d",&h);
    printf("Tem %f numeros %d",inserir(n,h),h);
}

float inserir(int n,int h){
    int i=0;
    float v[n],k;
    do{
        printf("valor nº %d\n",i+1);
        scanf("%f",&k);
        v[i]=k;
        i++;
    }while (i<n);
    return(duplicate(v,n,h));
}

float duplicate(float v[],int n,int h){
    int i = 0,d=0;
    while (i < n){
        if((v[i]== h) && (v[i-1] == v[i]) || (v[i]== v[i+1])){
            d++;
        }
        i++;
    }
    return(d);
}