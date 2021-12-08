#include <stdio.h>

float inserir(int n,int g), soma(float v[],int g);

void main(){
    int n,i,g;
    printf("Quantos numeros pretende inserir?\n");
    scanf("%d",&n);
    printf("Do valor nº 0 ate ao valor nº?");
    scanf("%d",&g);
    inserir(n,g);
}

float inserir(int n,int g){
    int i=0;
    float v[n],k;
    do{
        printf("valor nº %d\n",i+1);
        scanf("%f",&k);
        v[i]=k;
        i++;
    }while (i<n);
    soma(v,g);
}

float soma(float v[],int g){
    int i=0;
    float s=0;
    do{
        s =+ v[i];
        i++;
    }while(i<g);
    printf("%f",s);
}