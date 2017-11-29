/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 29 de Novembro de 2017, 21:14
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAM_MATRIZ 3


int main(int argc, char** argv) {
    int matriz[TAM_MATRIZ][TAM_MATRIZ];
    

        preencherMatrizA(matriz); 
        imprimirMatrizA(matriz); 
        escreverMatrizB(matriz); 
    
    return (EXIT_SUCCESS);
}