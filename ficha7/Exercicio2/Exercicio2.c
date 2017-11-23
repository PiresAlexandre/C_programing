/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 13:52
 */

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4
#define COLUNAS 5

/*
 * 
 */


int main(int argc, char** argv) {
    int i, j, mat[LINHAS][COLUNAS], num, cont;
    
    
    for (i=0; i < LINHAS; ++i) { 
        
        for (j=0; j < COLUNAS; ++j) {             
            printf("Insira valor para (%d , %d): ", i, j); 
            scanf("%d", &mat[i][j]);            
        }
    }
    
     for (i=0; i < LINHAS; ++i) { 
        puts("");
        
        for (j=0; j < COLUNAS; ++j) {             
            printf("%3d", mat[i][j]); 
        }
    }
    
    
    puts("\n\nIntroduza um numero para ver quantas vezes se repete: ");
    scanf("%d", &num);
    
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            if (num == mat[i][j]) {
                ++cont;
            }
        }
    }
    
    printf("\nExistem %d numeros iguais.\n ", cont);
    
    
    return (EXIT_SUCCESS);
}

