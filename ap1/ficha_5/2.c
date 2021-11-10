#include <stdio.h>
#include <math.h>
void main (){
    float a,b,c,root,dp,dm;
    printf("Insira o a,b e c ");
    scanf("%f %f %f",&a,&b,&c);
    if (pow(b,2)-4*a*c >= 0){
        root = sqrt(pow(b,2)-4*a*c);
        dp = ((-b+root)/2*a);
        dm = ((-b-root)/2*a);
        printf("As root são %f e %f\n",dp,dm);
    }else if (pow(b,2)-4*a*c<0){
        printf("It dont work maaaaan");
    }
}