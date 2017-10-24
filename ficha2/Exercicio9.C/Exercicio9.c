/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 16:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    printf("Introduza o numero desejado: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("O numero %d é par.\n",num);
    }else{
        printf("O numero %d é impar.\n", num);
    }

    return (EXIT_SUCCESS);
}

