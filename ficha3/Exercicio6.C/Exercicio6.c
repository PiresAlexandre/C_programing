/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 14:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int salto, limite, i;
    
    printf("Insira o limite desejavel: ");
    scanf("%d", &limite);
    
    printf("Introduza o valor do salto desejados: ");
    scanf("%d", &salto);
    
    for (i=0; i<limite; i+= salto){
        printf("Resultado do algoritmo: %d\n", i + salto);
    }
    
   
    
    

    return (EXIT_SUCCESS);
}

