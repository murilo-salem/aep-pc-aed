#include <stdio.h>

int main(){

    int N, Total = 0;
    double Final;


    for (int i = 0; i < 20; i++) {
        scanf("%d", &N);
        Total = Total + N;
    }

    Final = Total / 20;
    printf("Media parcial: %.1lf\n", Final);

    if (Final >= 8.0){
        Final = 10;
    }

    printf("A media final eh %.1lf", Final);

    return 0;
}