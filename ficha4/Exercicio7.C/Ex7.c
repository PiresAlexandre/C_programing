#include <stdio.h>
#include <stdlib.h>
#define Asterisco '*'

void asteriscos(int num) {
    int i = 1;
    for (i = 1; i <= num; ++i) {
        printf("%c ", Asterisco);
    }
}

int lerInteiro(int minimo, int maximo) {
    int ast;
    
    while (1) {
        puts("Introduza a quantidade de asteriscos (até 1000): ");
        scanf("%d", &ast);
        
        if (ast >= minimo && ast <= maximo) {
            break;
        } else {
            printf("Valor nao permitido! Tente novamente!\n");
            
        }
    }
    return ast;
}

