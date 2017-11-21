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
    char palavra1[LIMITE];
    char palavra2[LIMITE];
    int ordenar;
    
        puts("Introduza texto desejado: ");
    lerString(palavra1, LIMITE);
    
        puts("Introduza texto desejado: ");
    lerString(palavra2, LIMITE);
    
        ordenar = strcmp(palavra1, palavra2);
    
    
    if (ordenar < 0) {
        printf("\n%s\n", palavra1);
        printf("%s\n", palavra2);
    }
    else {
        printf("\n%s\n", palavra2);
        printf("%s\n", palavra1);
    }
    
    return (EXIT_SUCCESS);
}