#include <stdio.h>
#define N 15

float sort(float v[],int n,float x);
float inserir(int n);
float media(float v[],int n,float ma,float me,float x);
float badgrade(float v[],int n);

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
    return(badgrade(v,n));
}

float badgrade(float v[],int n){
    int x=0,i=0; // o x vai ser a quantidade de -1's e depois o marca os primeiros -1 sao postos como -2 para mais tarde serem ignorados 
    while(i<n){
        if ((v[i] == -1) && (x <= 3)){
            v[i] = -2;
            x++;
        }
    i++;
    }
    return(sort(v,n,x));
}


float sort(float v[],int n,float x){
    float ma,me;
    int i=0;
    ma = v[i];
    me = 2000;
    do{
        if(ma < v[i])
            ma = v[i]; /// esta é a parte do maior
        i++; //basicamente corro um numero pelo array todo
    }while(i<n);
    printf("ma %f\n",ma);
    i=0;
        do{
            if ((me> v[i]) && (v[i]!=ma) && (v[i] != -2)){ // isto vamos fazer que ignore os 3 ou ate 3 -1's
                me = v[i];   // esta é a posição da pior nota
            }
            i++;
        }while(i<n);                                                          
    printf("me %f\n",me);
    return(media(v,n-2-x,ma,me,x));
}

float media(float v[],int n,float ma,float me,float x){
    int i=0;
    float s=0;
    do{
        if(v[i]!= -2){
            s = s + v[i];
            //printf(" SSS %f\n",s);
            i++;
        }else
        i++;
    }while(i<n);
    if (ma < 0)
        ma=ma*-1;
    if (me < 0)
        me=me*-1;
    s = s - ma - me;
    s = s/n;
    return(s);
}