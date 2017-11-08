/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 7 de Novembro de 2017, 18:45
 */

#include <stdio.h>
#include <stdlib.h>

void fatorial(int num) {
    int x, final = 1;

    for (x = 1; x <= num; ++x) {
        final = final * x;
    }
    printf("O valor fatorial é %d.", final);
}


int main(int argc, char** argv) {

    int num;
    puts("Insira numero para determinar o seu fatorial ");
    scanf("%d", &num);

    fatorial(num);

    return (0);
}


