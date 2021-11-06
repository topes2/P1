#include <stdio.h>

int main() {
    float r, vol , area ,per;
    float pi = 3.141593;
    printf("Qual o raio?");
    scanf("%f",&r);
    per = 2*pi*r;
    area = pi*r*r;
    vol = (4.0/3.0)*pi*r*r*r;
    printf("O perimentro é %f \n A area é %f \n O volume é %f", per,area,vol); 
    return 0;
}