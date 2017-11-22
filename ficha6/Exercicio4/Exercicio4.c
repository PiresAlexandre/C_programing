/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Novembro de 2017, 22:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define LIMITE 25


int main(int argc, char** argv) {
    
    char palavra1[LIMITE], palavra2[LIMITE];
    
        puts("Introduza texto desejado: ");
   
    lerString(palavra1, LIMITE);
    
    strcpy(palavra2, palavra1);
    
        printf("Voce introduziu a seguinte frase: %s\n ",palavra2);
    
    return (EXIT_SUCCESS);
}
