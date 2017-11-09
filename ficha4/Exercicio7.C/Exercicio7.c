/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 0:25
 */

#include <stdio.h>
#include <stdlib.h>
#define Asterisco '*'


int lerinteiro(int minimo, int maximo) {
    int ast;
    
    while (1) {
        puts("Quantos asteriscos (*) quer colocar entre 1 e 50?");
        scanf("%d", &ast);
        
        if (ast >= minimo && ast <= maximo) {
            break;
        } else {
            printf("Valor nao permitido! Tente novamente!\n");
            printf("\n");
        }
    }
    return ast;
}

void asteriscos(int num) {
    int i = 1;
    for (i = 1; i <= num; ++i) {
        printf("%c ", Asterisco);
    }
}

int main(int argc, char** argv) {

    int ast, minimo = 1, maximo = 50;

    ast = lerinteiro(minimo, maximo);
    asteriscos(ast);

    return (0);
}
