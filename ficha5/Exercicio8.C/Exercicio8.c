/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 16 de Novembro de 2017, 10:15
 */

#include <stdio.h>
#include <stdlib.h>
#define LIMITE 1000

int main(int argc, char** argv) {
    int numeros[LIMITE], x = 0, num;

    puts("introduza um numero limite");
    scanf("%d", &num);

    if (num <= LIMITE) {
        for (x = 0; x < num; ++x) {
            numeros[x] = x;
        }

        for (x = 4; x < num; x += 2) {
            numeros[x] = 0;
        }

        for (x = 6; x < num; x += 3) {
            numeros[x] = 0;
        }

        for (x = 10; x < num; x += 5) {
            numeros[x] = 0;
        }

        for (x = 14; x < num; x += 7) {
            numeros[x] = 0;
        }

        for (x = 2; x < num; ++x) {
            if (numeros[x] != 0) {
                printf(" %d ", numeros[x]);
            }
        }
    } else {
        puts("Operacao invalida!");
    }

    return (EXIT_SUCCESS);
}

