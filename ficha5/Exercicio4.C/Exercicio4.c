/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 16:07
 */

    
#include <stdio.h>
#include <stdlib.h>

#define LIMITE 10

/* 
 * 
 * 
 */

int main(int argc, char** argv) {
    
    double num, soma = 0, array[LIMITE];
    int x = 0, total = 0;

        for (x = 0; x < LIMITE; ++x) {
            puts("Introduza um valor: ");
            scanf("%lf", &num);
            puts("Introduza -1 quando desejar terminar a operação\n");
        
        if (num == -1) {
            break;
        } else {
            array[x] = num;
            total += 1;
        }
    }
        for (x = 0; x < LIMITE; ++x) {
            soma += array[x];
    }
    
    printf("A media dos numeros introduzidos e de %.lf \n\n", soma / total);

    return (EXIT_SUCCESS);
}

    

