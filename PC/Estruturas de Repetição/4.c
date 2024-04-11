#include <stdio.h>

int main(){

    double Base, Altura, Total;

    for (int i = 0; i < 50; i++) {
        printf("Insira base e altura:\n");
        scanf("%lf %lf", &Base, &Altura);
        printf("A area eh %.1lf.\n", (Base*Altura)/2);
    }

    return 0;
}