/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Novembro de 2017, 22:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 25

int main(int argc, char** argv) {
    char palavra[MAX], caracteres;

    puts("Escreva uma frase:");
    lerString(palavra, MAX);

    puts("Introduza um caracter:");
    scanf("%c", &caracteres);
    
        clean_buffer();

    countChar(palavra, caracteres);

    return (EXIT_SUCCESS);
}
