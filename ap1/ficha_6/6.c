#include <stdio.h>

double custoEnvio(double c,double cs,double n);
double custoEncomenda(double n);

void main(){
    double c,cs,n,p,pl;
    printf("Insira o numero de livros");
    scanf("%lf",&n);
    c = 3; // custo de 1 mandar vir 1 livro
    printf("Insira o peso para os restantes livros em kg");
    scanf("%lf",&cs);
    cs = cs*.02; // o custo ao kg
    printf("%lf",custoEnvio(c,cs,n)+ custoEncomenda(n));
}

double custoEnvio(double c,double cs,double n){
    return(c+cs*(n-1)); //os 3 mais o peso vezes .02
}

double custoEncomenda(double n){
    int i = 1,p= 0,pt= 0;
    while(i <= n){
        printf("Insira o preço do livro nº %d\n",i);
        scanf("%d",&p);
        pt = pt+p;
        i++;
    }
    return(pt);
}

//ok entao para fazer esta temos de calcular o preco de 
//envio e adicionar o custo dos livros
//mas talvez assim usa se 2 funcoes para ser mais simples
// e depois no custo de envio temos de ver o peso tambem