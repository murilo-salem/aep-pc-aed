#include <stdio.h>
#include <math.h>

int main(){

    int Operacao;
    double A, B;

    printf("Insira operacao, A, B:");
    scanf("%d %lf %lf", &Operacao, &A, &B);

    switch (Operacao) {
        case 1:
            printf("%.1lf", A + B);
            break;
        case 2:
            printf("%.1lf", abs(A - B));
            break;
        case 3:
            printf("%.1lf", pow(A,B));
            break;
        case 4:
            printf("%.1lf", (A+B)/2);
            break;
        default:
            printf("Default.");
    }

    return 0;
}