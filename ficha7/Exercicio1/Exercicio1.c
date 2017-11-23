/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 12:09
 */
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3



int main(int argc, char** argv) {
    int i, j, mat[TAMANHO][TAMANHO], maior, menor;
    
    
    for (i=0; i < TAMANHO; ++i) { 
        
        for (j=0; j < TAMANHO; ++j) {             
            printf("Insira valor para (%d , %d): ", i, j); 
            scanf("%d", &mat[i][j]);            
        }
    }
    
     for (i=0; i < TAMANHO; ++i) { 
        puts("");
        
        for (j=0; j < TAMANHO; ++j) {             
            printf("%3d", mat[i][j]); 
        }
    }
    
    maior = mat[0][0];    
        for (i=0; i < TAMANHO; ++i) { 
        for (j=0; j < TAMANHO; ++j) {             
            if (maior < mat[i][j]) { 
                maior = mat[i][j]; }            
        }
    }
    
    printf("\n\nO maior valor e: %d", maior);
    
    menor = mat[0][0];    
        for (i=0; i > TAMANHO; ++i) { 
        for (j=0; j > TAMANHO; ++j) {             
            if (menor > mat[i][j]) { 
                menor = mat[i][j]; }            
        }
    }
    
    printf("\nO menor valor e: %d", menor);
    
    return 0;
}

