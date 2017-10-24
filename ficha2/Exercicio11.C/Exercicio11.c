/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 16:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x, y;
    
    printf("Introduza o valor de x: ");
    scanf("%f", &x);
    
    if (x < 1){
        y = x;
        printf("O valor de y é: %.2f\n", y);
    }else if (x == 1){
        y = 0;
        printf("O valor de y é: %.f\n", y);
    }else if (x > 1){
        y = x * 2;
        printf("O valor de y é: %.2f\n", y);
    }

    return (EXIT_SUCCESS);
}

