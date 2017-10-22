/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Outubro de 2017, 23:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    printf("Introduza 1º numero: ");
    scanf("%d", &numero1);
    
    printf("Introduza 2º numero: ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2) {
        printf("O maior numero é: %d\n", numero1);
    }else{
        printf("O maior numero é: %d\n", numero2);
    }
    
    

    return (EXIT_SUCCESS);
}

