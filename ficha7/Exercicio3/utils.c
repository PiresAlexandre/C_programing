/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "utils.h"

void preencherMatriz(int matriz[][COLUNAS]) {
    int i, j;
    
    for (i = 0; i < LINHAS; ++i) {
        
        for (j = 0; j < COLUNAS; ++j) {
            printf("Linha[%d]: introduza o seu codigo, 1º nota e 2º nota: ", i + 1);
            scanf("%d", &matriz[i][j]);
        }
        puts(" ");
    }
}

void imprimirMatriz(int matriz[][COLUNAS]) {
    int i, j;
    
    printf("Codigo  Nota1  Nota2  Media\n");
    
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %4d ", matriz[i][j]);
        }
        printf("   %.2f ", (float) (matriz[i][1] + matriz[i][2]) / 2);
        puts(" ");
    }
}