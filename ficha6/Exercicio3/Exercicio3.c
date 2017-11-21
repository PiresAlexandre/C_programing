/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 21 de Novembro de 2017, 16:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define LIMITE 25


int main(int argc, char** argv) {
    char frase_palavra1[LIMITE];
    char frase_palavra2[LIMITE];
    int ordenar;
    
        puts("Introduza texto desejado: ");
    lerString(frase_palavra1, LIMITE);
    
        puts("Introduza texto desejado: ");
    lerString(frase_palavra2, LIMITE);
    
        ordenar = strcmp(frase_palavra1, frase_palavra2);
    
    
    if (ordenar < 0) {
        printf("\n%s\n", frase_palavra1);
        printf("%s\n", frase_palavra2);
    }
    else {
        printf("\n%s\n", frase_palavra2);
        printf("%s\n", frase_palavra1);
    }
    
    return (EXIT_SUCCESS);
}