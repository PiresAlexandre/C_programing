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
#define TAM_MATRIZ 10
#define TOKENS 2


int main(int argc, char** argv) {
    char tokens[TOKENS];                        //VETOR PARA GUARDAR OS TOKENS SELECIONADOS PELOS JOGADORES
    char matriz[TAM_MATRIZ][TAM_MATRIZ];        //MATRIZ 
    
    token_escolhido(tokens);
    criarMatriz(matriz);
    apresentacao();
    printMatriz(matriz);
    jogadas(matriz,tokens);
    
    return (EXIT_SUCCESS);
}

