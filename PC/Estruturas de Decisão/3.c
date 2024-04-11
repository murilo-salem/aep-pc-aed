#include <stdio.h>

int main(){

    int A, B, C;

    printf("Insira N Y K:");
    scanf("%d %d %d", &A, &B, &C);

    if (A == B == C){
        printf("São iguais.");
    } else if (A > B && A > C){
        printf("%d eh o maior", A);
    } else if (B > A && B > C){
        printf("%d eh o maior", B);
    } else if (C > A && C > B){
        printf("%d eh o maior", C);
    } else {
        printf("Falta algo.");
    }

    return 0;
}