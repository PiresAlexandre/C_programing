/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 14:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor_inicial, valor_final;
    
    printf("Introduza o valor inicial: ");
    scanf("%d", &valor_inicial);
    
    printf("Introduza o valor final: ");
    scanf("%d", &valor_final);
    
    for(++valor_inicial; valor_inicial < valor_final; valor_inicial += 1){
        printf("%d\n", valor_inicial);
    }

    return (EXIT_SUCCESS);
}

