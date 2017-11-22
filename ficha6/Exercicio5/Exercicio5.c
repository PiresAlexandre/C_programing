/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Novembro de 2017, 22:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define LIMITE 25


int main(int argc, char** argv) {
    
    int n_caracteres;
    char frase[LIMITE];
    
        puts("Insira frase para ver o numero de caracteres: ");
        
    lerString(frase, LIMITE);
    
    n_caracteres = strlen(frase);
    
        printf("Nº de caracteres: %d ", n_caracteres);
    
    return (EXIT_SUCCESS);
}


