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
#define MAX_JOGADORES 2
#define TAM_MATRIZ 10
#define TOKEN 2

/*
 * 
 */

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void criarMatriz(char mat[][TAM_MATRIZ]){
    int i, j, aj = 65;
    
        for(j=1; j < TAM_MATRIZ; ++j){        //PRIMEIRA COLUNA COM NUMEROS (1-10)
            mat[j][0]= '0' + j;
    }
    
        for(i=1; i < TAM_MATRIZ; ++i){        //PRIMEIRA LINHA COM LETRAS (A-J)
            mat[0][i]=aj;
            aj+=1;
    }
        
        for(i=1; i < TAM_MATRIZ; ++i){        //PRENCHER AS OUTRAS POSICOES COM UM *
            for(j=1; j< TAM_MATRIZ; ++j){
                mat[i][j]='*';
        }
    }
    
        mat[0][0]= ' ';                       //PRENCHER A POSICAO (0,0) COM NADA   
    
}

void mostrarMatriz(char mat[][TAM_MATRIZ]) {
    int i, j;
    
    // IMPRIMIR A MATRIZ
     for (i = 0; i < TAM_MATRIZ; ++i) {
            for (j = 0; j < TAM_MATRIZ; ++j) {
                printf("%c|", mat[i][j]);
             
        }
            puts("");  
    }
        
}

void token_escolhido(char tokens[]){
    int i;
    
    //OS JOGADORES ESCOLHEM CADA UM OS SEUS TOKENS
    for(i = 0; i < TOKEN; ++i){
        printf("Jogador %d escolha o seu token: ", i+1);
        scanf("%c", &tokens[i]);
        
        if(tokens[1]==tokens[0]){
            i-= 1;
            puts("TOKENS IGUAIS! Escolha diferente.");
            clean_buffer();
            continue;
        }
        clean_buffer();
    }
    puts("");
    
}

int main(int argc, char** argv) {
    char matriz[TAM_MATRIZ][TAM_MATRIZ];
    
        criarMatriz(matriz);
        mostrarMatriz(matriz);  
        token_escolhido(matriz);
    
    return (EXIT_SUCCESS);
}

