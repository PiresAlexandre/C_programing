/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Outubro de 2017, 0:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    printf("Insira 1º numero: ");
    scanf("%d", &numero1);
    
    printf("Insira 2º numero: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
        printf("A ordem é: %d > %d\n", numero1, numero2 );
    }else{
        printf("A ordem é: %d > %d\n", numero2, numero1 );
    }

    return (EXIT_SUCCESS);
}

