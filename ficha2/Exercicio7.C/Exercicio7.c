/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 1:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, num3;
    
    printf("Introduza 1º numero: ");
    scanf("%d", &num1);
    
    printf("Introduza 2º numero: ");
    scanf("%d", &num2);
    
    printf("Introduza 3º numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num2 > num3) {
        printf("Por ordem crescente fica: %d < %d < %d\n", num3, num2, num1);
    }else if (num2 > num3 && num3 > num1) {
        printf("Por ordem crescente fica: %d < %d < %d\n", num1, num3, num2);
    }else{
        printf("Por ordem crescente fica: %d < %d < %d\n", num1, num2, num3);
    }

    return (EXIT_SUCCESS);
}

