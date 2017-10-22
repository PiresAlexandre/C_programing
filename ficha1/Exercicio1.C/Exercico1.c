/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 14 de Outubro de 2017, 22:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, resultado;
    printf("Escreva um numero: ");
    scanf("%d", &num1);
    
    printf("Escreva outro numero; ");
    scanf("%d", &num2);
    
    resultado = num1 + num2;
    
    printf("%d + %d = %d\n", num1,num2,resultado);
    
    printf("O resultado final é: %d", resultado);
    
    return (EXIT_SUCCESS);
}

