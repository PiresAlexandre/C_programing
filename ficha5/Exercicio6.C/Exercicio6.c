/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 14 de Novembro de 2017, 17:24
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define LIMITE 10


int main(int argc, char** argv) {
    int x = 0, arr[LIMITE];
    char op;
    
        for (x = 0; x < LIMITE; ++x) {
            puts("Insira numero: ");
            scanf("%d", &arr[x]);
     }
    
    while (1) {
        
        limparBufferEntrada();
    
    puts("Que opcao deseja ver? P (numeros pares) ou I (numeros impares)");
    scanf("%c", &op);

    
        if (op == 'P' || op == 'p') {
            printPar(arr);
            break;
            
        } else if (op == 'I' || op == 'i') {
            printImpar(arr);
            break;
            
        } else {
            puts("Opção Invalida!");
        }
    }
    
    return (EXIT_SUCCESS);
}

