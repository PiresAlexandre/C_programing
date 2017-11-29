/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "utils.h"

void preencherMatrizA(int matrizA[][TAM_MATRIZ]) {
    int i, j;
    
    for (i = 0; i < TAM_MATRIZ; ++i) {
        for (j = 0; j < TAM_MATRIZ; ++j) {
            printf("Introduza o seu valor para [%d],[%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        puts(" ");
    }
}

void imprimirMatrizA(int matrizA[][TAM_MATRIZ]) {
    int i, j;
    
    puts("Matriz A");
    
        for (i = 0; i < TAM_MATRIZ; ++i) {
            for (j = 0; j < TAM_MATRIZ; ++j) {
                printf(" %d", matrizA[i][j]);
        }
            puts(" ");
    }
        puts(" ");
}

void escreverMatrizB(int matriz[][TAM_MATRIZ]) {
    int i, j,  matrizB[TAM_MATRIZ][TAM_MATRIZ];

        for (i = 0; i < TAM_MATRIZ; ++i) {
            
            for (j = 0; j < TAM_MATRIZ; ++j) {
                matrizB[j][i] = matriz[i][j];
        }
    }

    puts("Matriz B");
    
        for (i = 0; i < TAM_MATRIZ; ++i) {
            
            for (j = 0; j < TAM_MATRIZ; ++j) {
                printf(" %d", matrizB[i][j]);
        }
            puts(" ");
    }
}