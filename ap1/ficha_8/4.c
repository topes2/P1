#include <stdio.h>

float inserir(int n);
float sort(float v[],int n);

void main(){
    int n,i;
    printf("Quantos numeros pretende inserir?\n");
    scanf("%d",&n);
    inserir(n);
}

float inserir(int n){
    int i=0;
    float v[n],k;
    do{
        printf("Tempo do atleta %d\n",i+1);
        scanf("%f",&k);
        v[i]=k;
        i++;
    }while (i<n);
    sort(v,n);
}

float sort(float v[],int n){
    float s[n],m1,m2=0,m3=0;
    int i=0;
    m1 = v[i];
    do{
        if(m1 < v[i])
            m1 = v[i];   /// esta é a parte do maior
        i++; //basicamente corro um numero pelo array todo
    }while(i<n);

    i=0; // reset do counter

    printf("1 lugar %f\n",m1);

    do{
        if(m2<m1 && m2<v[i] && v[i]!=m1)
            m2 = v[i];
        i++;
    }while(i<n);

    printf("2 lugar %f\n",m2);

    i=0;

    do{
        if(m3<m2 && m3<v[i] && v[i]!=m2 && v[i]!=m1)
        m3 = v[i];
        i++;
    }while(i<n);
    printf("3 lugar %f\n",m3);    
}

// ok a ideia é fazer 3 do, um para ver o maior e depois um segundo e 3