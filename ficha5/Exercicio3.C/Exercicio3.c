/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 14:05
 */

#include <stdio.h>
#include <stdlib.h>
#define LIMITE 10

/*
 * 
 */

void CleanEntryBuffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    int x, i, arr[LIMITE], count;
    char symbol, symbol2;

    for (x = 0; x <= LIMITE; ++x) {
        puts("Introduza um carater desejado: ");
        scanf("%c", &symbol);
    CleanEntryBuffer();
        arr[x] = symbol;
    }
        
        puts("Introduza segundo carater desejado: ");
        scanf("%c", &symbol2);
    CleanEntryBuffer();

    for (i = 0; i <= LIMITE; ++i) {
        if (symbol2 == arr[i]) {
            ++count;
        } 
    }
    
    printf("O carater repete-se %d vezes\n", count);
   
    return (EXIT_SUCCESS);
}

