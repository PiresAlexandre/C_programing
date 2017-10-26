/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 14:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor, i;
    
    printf("Introduza o numero desejado: ");
    scanf("%d", &valor);
    
    printf("5 numeros anteriores: ");
    for (i=1; i<=5; ++i){
        printf("%d ", valor -i);
    }
    
    printf("\n5 numeros superiores: ");
    for (i=1; i<=5; ++i){
        printf("%d ", valor +i);
    }
    
    
    
    
            

    return (EXIT_SUCCESS);
}

