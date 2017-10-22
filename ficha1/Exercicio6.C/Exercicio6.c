/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 3:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valor1, ant, suc;
    
    printf("Introduza valor: ");
    scanf("%d", &valor1);
    
    ant = valor1 - 1;
    printf("Antecessor " "%d\n", ant);
    
    suc = valor1 + 1;
    printf("Sucessor " "%d", suc);
   
    
    return (EXIT_SUCCESS);
}

