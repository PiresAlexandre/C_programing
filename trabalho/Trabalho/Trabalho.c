/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 30 de Novembro de 2017, 10:57
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define MAX 2
#define TAM_MATRIZ 10

/*
 * 
 */

void criarMatriz(char tabela[][TAM_MATRIZ]){
    int i, j, aj = 65;
    
        for(j=1; j < TAM_MATRIZ; ++j){        //PRIMEIRA COLUNA COM NUMEROS (1-10)
            tabela[j][0]= '0' + j;
    }
    
        for(i=1; i < TAM_MATRIZ; ++i){        //PRIMEIRA LINHA COM LETRAS (A-J)
            tabela[0][i]=aj;
            aj+=1;
    }
        
        for(i=1; i < TAM_MATRIZ; ++i){        //PRENCHER AS OUTRAS POSICOES COM UM *
            for(j=1; j< TAM_MATRIZ; ++j){
                tabela[i][j]='*';
        }
    }
    
        tabela[0][0]= ' ';                    //PRENCHER A POSICAO (0,0) COM NADA   
    
}

void mostrarMatriz(char tabela[][TAM_MATRIZ]) {
    int i, j;
    
    // IMPRIMIR A MATRIZ
     for (i = 0; i < TAM_MATRIZ; ++i) {
            for (j = 0; j < TAM_MATRIZ; ++j) {
                printf("%c|", tabela[i][j]);
             
        }
            puts("");  
    }
        
}

int main(int argc, char** argv) {
    char matriz[TAM_MATRIZ][TAM_MATRIZ];
    
        criarMatriz(matriz);
        mostrarMatriz(matriz);        
    
    return (EXIT_SUCCESS);
}

