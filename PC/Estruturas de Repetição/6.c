#include <stdio.h>

int main(){

    double Soma, Media, X;
    int K = 0;

    for (int i = 0; i < 4; ++i) {
        printf("Insira X:\n");
        scanf("%lf", &X);
        if (X > 100){
            Soma = Soma + X;
            Media = Media + X;
            K++;
        }
    }

    printf("Soma eh %.1lf e Media eh %.1lf", Soma, (Media/K));

    return 0;
}