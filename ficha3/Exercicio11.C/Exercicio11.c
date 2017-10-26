/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 15:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int limite, numero, contador;
    
    printf("Introduza um numero: ");
    scanf("%d", &limite);
    
    while ( limite > 0 ){
        scanf("%d", &numero);
        limite -= numero;
        contador++;
       
    }
    printf("Foram introduzidos cerca de %d", contador);
        
    

    return (EXIT_SUCCESS);
}

