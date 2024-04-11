#include <stdio.h>

int main(){

    int N, Y;

    printf("Insira N e Y:\n");
    scanf("%d %d", &N, &Y);

    if (N == Y){
        printf("Sao iguais.\n");
    } else if (N > Y){
        printf("%d eh maior que %d.\n", N, Y);
    } else {
        printf("%d eh maior que %d", Y, N);
    }

    return 0;
}