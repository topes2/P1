#include <stdio.h>
int suc(int a);

void main(){
    int a;
    printf("Put in a number");
    scanf("%d",&a);
    printf("%d",suc(a));
}

int suc(int a){
    return(a+1);
}