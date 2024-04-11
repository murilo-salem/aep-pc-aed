#include <stdio.h>

int main(){

    int A, B, C;

    printf("Insira A, B, C:\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A == B == C){
        printf("Equilátero.");
    } else if (A == B || B == C || A == C){
        printf("Isosceles.");
    } else if (A != B != C){
        printf("Escaleno.");
    } else {
        printf("Não se enquadra.");
    }

    return 0;
}