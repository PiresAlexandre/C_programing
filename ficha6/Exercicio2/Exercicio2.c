/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 21 de Novembro de 2017, 16:12
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define LIMITE 25

int main(int argc, char** argv) {
    
    char insert[LIMITE];

        puts("Escreva o que deseja que seja imprimido: ");
        lerString(insert, LIMITE);
        printf("Resultado: %s", insert);
    
    return (EXIT_SUCCESS);
}

