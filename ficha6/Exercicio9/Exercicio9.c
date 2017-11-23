/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 10:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define LIMITE 25   


int main(int argc, char** argv) {
    char frase[LIMITE], frase2[LIMITE],  virgula[1] = ",";     
   
    puts("Insira o seu primeiro texto: ");
    lerString(frase, LIMITE);
    
    puts("Insira o seu segundo texto: ");
    lerString(frase2, LIMITE);
    
    strcat(frase, virgula);
    
    printf("O seu texto: %s\n ", frase);
    
    return (EXIT_SUCCESS);
}

