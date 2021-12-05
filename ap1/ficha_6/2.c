#include <stdio.h>
int suc(int a);
int sqsuc(int a);

void main(){
    int a;
    printf("Put in a number\n");
    scanf("%d",&a);
    printf("%d\n",sqsuc(suc(a)));
}

int suc(int a){
    return(a+1);
}

int sqsuc(int a){
    return(a*a);
}