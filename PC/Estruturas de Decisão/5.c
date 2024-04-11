#include <stdio.h>

int main(){

    int A, B, C;

    printf("Insira A, B, C:\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A < (B+C) && B < (C+A) && C < (A+B)) {
        printf("Podem ser.");
    } else {
        printf("Não podem ser.");
    }

    return 0;
}