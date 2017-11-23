/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 10:18
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define LIMITE 25

/*
 * 
 */

int main(int argc, char** argv) {
    char frase[LIMITE];
    int x, cont = 0;
    
    
    for (x = 0; x <LIMITE; ++x) {  
        frase[x] = ' ';
    }
    
    puts("Insira o seu texto: ");
    lerString(frase, LIMITE);
    
    for (x = 0; x < LIMITE; ++x) {
        if (frase[x] == ' '){
            continue;
        }
        else {
            ++cont;
        }
    }
    
    printf("Numero de caracteres excluindo os espacos: %d\n", cont - 2);
    
    return (EXIT_SUCCESS);
}