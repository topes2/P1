#include <stdio.h>
double l,day,type,gas95,gas98,gaso;
double before15(double l);
double after15(double l);
double when(double day,double l);

void main(){
    printf("Que diz vais abastecer?\n");
    scanf("%lf",&day);
    printf("Quantos litros?\n");
    scanf("%lf",&l);
    printf("O custo é %f\n",when(day,l));
}

double when(double day,double l){
    if (day < 15){
        before15(l);
    } else if (day >= 15){
        after15(l);
    }
}

double after15(double l){
    gas95 = 1.343 - 0.021;
    gaso = 1.126 - 0.023;
    gas98 = 1.414;
    printf("Qual é o combustivel?\n 1:gasoleo, 2:gasolina95, 3:gasolina98\n");
    scanf("%lf",&type);
    if(type == 1){
        return (gaso*l);
    } else if(type == 2){
        return (gas95 *l);
    } else if (type == 3){
        return (gas98 * l);
    }
}

double before15(double l){
    gas95 = 1.343;
    gaso = 1.126;
    gas98 = 1.414;
    printf("Qual é o combustivel?\n 1:gasoleo, 2:gasolina95, 3:gasolina98\n");
    scanf("%lf",&type);
    if(type == 1){
        return (gaso*l);
    } else if(type == 2){
        return (gas95 *l);
    } else if (type == 3){
        return (gas98 * l);
    }
}