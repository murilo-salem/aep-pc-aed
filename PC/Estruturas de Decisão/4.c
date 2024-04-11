#include <stdio.h>

int main(){

    double Nota;

    printf("Insira a nota:");
    scanf("%lf", &Nota);

    if (Nota < 5.0){
        printf("D");
    } else if (Nota >= 5.0 && Nota < 7.0){
        printf("C");
    } else if (Nota >= 7.0 && Nota < 9.0){
        printf("B");
    } else if (Nota >= 9.0 && Nota <= 10.0){
        printf("A");
    }

    return 0;
}