#include <stdio.h>
#define LIMITE 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

    void printPar(int arr[]) {
        int x;

        puts("Numeros pares: ");
            for (x = 0; x < LIMITE; ++x) {
                if (arr[x] % 2 == 0) {
            printf(" %d ", arr[x]);
        }
    } 
}

    void printImpar(int arr[]) {
        int x;
    
        puts("Numeros impares: ");
            for (x = 0; x < LIMITE; ++x) {
                if (arr[x] % 2 != 0) {
            printf("%d ", arr[x]);
        }
    }
}