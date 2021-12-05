#include <stdio.h>

double custoEnvio(double c,double cs,double n);

void main(){
    double c,cs,n;
    printf("Insira o numero de livros");
    scanf("%lf",&n);
    printf("Insira o preco de envio para o 1 livro");
    scanf("%lf",&c);
    printf("Insira o preco para os restantes livros");
    scanf("%lf",&cs);
    printf("%lf",custoEnvio(c,cs,n));

}

double custoEnvio(double c,double cs,double n){
    return(c+cs*(n-1));
}