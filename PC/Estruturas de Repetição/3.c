#include <stdio.h>

int main(){

    double Media, Total;
    int N, Kontador = 0;

    printf("Insira N:");
    scanf("%d", &N);

    for (int I = 0; I < N; I++) {
        printf("Insira a nota:");
        scanf("%lf", &Media);
        if (Media >= 4) {
            Total = Total + Media;
            Kontador++;
        }
    }

    printf("Media final: %.1lf", Total/Kontador);

    return 0;
}