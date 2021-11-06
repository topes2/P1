#include <stdio.h>
int main(){
float d , v;
printf("Qual é a sua velocidade?");
scanf("%f",&v);
d = (1.0/2.0) * (v/10.0)*(v/10.0);
printf("A distancia que vai percurrer é %f", d );
return 0;
}