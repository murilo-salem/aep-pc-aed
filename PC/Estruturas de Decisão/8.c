#include <stdio.h>

int main() {

    int A, B, C;

    printf("Insira A, B, C:\n");
    scanf("%d %d %d", &A, &B, &C);

    if ((A == B) && (B == C)){
      printf("Iguais") ;
    } else if (A < B && A < C){
        printf("Menor eh %d", A);
    } else if (B < A && B < C){
        printf("Menor eh %d", B);
    } else if (C < B && C < A){
        printf("Menor eh %d", A);
    } else {
        printf("?");
    }

    return 0;
}