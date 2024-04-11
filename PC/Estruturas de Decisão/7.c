#include <stdio.h>

int main(){

    double Nota;
    int Frequencia;

    printf("Insira a nota e a frequencia:");
    scanf("%lf %d", &Nota, &Frequencia);

    if (Nota >= 7.0 && Frequencia >= 75){
        printf("Aprovado.");
    } else if (Nota >= 9){
        printf("Aprovado com qualquer frequencia.");
    } else if (Nota >= 5.0 && Frequencia >= 75){
        printf("Exame.");
    }


    return 0;
}