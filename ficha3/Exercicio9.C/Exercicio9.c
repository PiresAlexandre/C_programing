/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 15:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor, i;
    
    printf("Introduza o numero da tabuada: ");
    scanf("%d", &valor);
    
    for (i=1; i<=10; ++i){
        printf("%d*%d=%d\n", valor, i, valor*i);
    }

    return (EXIT_SUCCESS);
}

