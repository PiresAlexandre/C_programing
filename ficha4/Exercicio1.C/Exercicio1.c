/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 3 de Novembro de 2017, 19:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
    int lerInteiro(){
    int valor;
    
    scanf("%d", &valor);
    return valor;
}
void escrever(int valor) {
    int x;
    for (x=0; x<valor; ++x) {
        printf("*");
    }
}

int main(int argc, char** argv) {
    int valor;
    
    printf("Introduza um valor: ");
    valor = lerInteiro();
    escrever(valor);
    

    return (EXIT_SUCCESS);
}

