#include <stdio.h>

int main(){

    double X, Total;
    int K = 0;

    for (int i = 0; i < 4; ++i) {
        printf("Insira X:\n");
        scanf("%lf", &X);
        if (X >= 0){
            printf("%.1lf\n", X);
        } else {
            Total = Total + X;
            K++;
        }
    }

    printf("Media dos negativos eh %.1lf", Total/K);

    return 0;
}