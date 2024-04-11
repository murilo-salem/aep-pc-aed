#include <stdio.h>

int main(){

    double N;

    printf("Insira um numero:");
    scanf("%lf", &N);

    if (N > 0){
        printf("Positivo");
    } else if (N < 0){
        printf("Negativo");
    } else {
        printf("Zero");
    }

    return 0;
}