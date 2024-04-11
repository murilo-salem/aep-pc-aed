#include <stdio.h>

int main(){

    char Nome[50];

    for (int I = 0; I < 50; I++) {
        fgets(Nome, 50, stdin);
        printf("%s", Nome);
    }

    return 0;
}