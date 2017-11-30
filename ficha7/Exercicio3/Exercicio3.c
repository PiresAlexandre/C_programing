/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 14:14
 */

#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 4


int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    
    //prencher matriz 
        preencherMatriz(matriz); 
    //imprimir matriz
        imprimirMatriz(matriz); 
    
    return (EXIT_SUCCESS);
}
