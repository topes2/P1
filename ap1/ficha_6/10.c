#include <stdio.h>
float check(float l1, float l2, float l3);

void main(){
    float l1,l2,l3;
    printf("insira cada lado separado por um espaço\n");
    scanf("%f %f %f",&l1,&l2,&l3);
    printf("%f",check(l1,l2,l3));
}

float check(float l1,float l2,float l3){
    if(l1+l2 < l3 ){
        return(-1);
    }else if(l1 + l2 > l3){
        if(l1 == l2 && l2 == l3){
            return(3);
        }else if ( l1==l2 || l1 == l3 || l2 == l3){
            return(2);
        }else{
            return(1);
        }
    }
}