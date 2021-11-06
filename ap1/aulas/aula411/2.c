#include <stdio.h>
int num,i;
int primo(int i,int num);

void main(){
    printf("Qual e o numero: ");
    scanf("%d",&num);
    i = 1;
    while (i <= num){
        
        primo(i,num);
        i++;
    }
}

int primo(int i,int num){

    if (num%i==0){

       // printf("dentro\n");
        printf("%d\n",i);
        return i;
    }    
    }


//0 ate numero, davas 100, 