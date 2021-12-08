#include <stdio.h>
#define N 15

float sort(float v[],int n);
float inserir(int n);
float media(float v[],int n,float ma,float me);

void main(){
    printf("%f\n",inserir(N));
}

float inserir(int n){
    int i=0;
    float v[N]={-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1,20},k;
    //do{
        //printf("valor nº %d\n",i+1);
        //scanf("%f",&k);
        //v[i]=k;
        //i++;
    //}while (i<n);
    return(sort(v,n));
}


float sort(float v[],int n){
    float ma,me;
    int i=0;
    ma = v[i];
    me = v[i];
    do{
        if(ma < v[i])
            ma = v[i]; /// esta é a parte do maior
        i++; //basicamente corro um numero pelo array todo
    }while(i<n);
    printf("ma %f\n",ma);
    i=0;
    do{
        if((me > v[i]) && (v[i] =! ma))
            me = v[i]; /// esta é a posição da pior nota
        i++; //basicamente corro um numero pelo array todo
    }while(i<n);
    printf("me %f\n",me);
    return(media(v,n-2,ma,me));
}

float media(float v[],int n,float ma,float me){
    int i=0;
    float s=0;
    do{
        s = s + v[i];
        printf(" SSS %f\n",s);
        i++;
    }while(i<n);
    if (ma < 0)
        ma=ma*-1;
    if (me < 0)
        me=me*-1;
    s = s - ma - me;
    return(s/n);
}