#include <stdio.h>
int main(){
    int one, two , three;
    printf("Insira 3 numeros ");
    scanf("%d %d %d", &one,&two,&three);
    if (one>two && one<three && three>two){
        printf("É %d", one);
    } else if (one<two && one>three && three<two){
        printf("É %d", one);
    } else if (two>one && two<three && one<three){
        printf("É %d", two);
    } else if (two<one && two>three && one>three){
        printf("É %d", two);
    } else if( three<one && three>two && one>two){
        printf("É %d", three);
    } else if ( three>one && three<two && one<two){
        printf("É %d",three);
    }else {
        printf("devia ter ficado em maeg");
    }
    return 0;
}