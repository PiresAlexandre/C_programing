/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 14 de Novembro de 2017, 16:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

#define LIMITE 10

int main(int argc, char** argv) {
    double array[LIMITE], num;
    int x;

    for (x = 0; x < LIMITE; ++x) {
        puts("Introduza um valor: ");
        scanf("%lf", &array[x]);      
    }
    
    imprimirVetor(array);
    dobroVetor(array);
    somaVetor(array);
    mediaVetor(array);
    maiorVetor(array);
    menorVetor(array);

    return (EXIT_SUCCESS);
}
