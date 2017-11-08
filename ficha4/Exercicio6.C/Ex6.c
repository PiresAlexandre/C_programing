/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include "Ex6.h"


void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

void desfigura(char letra, int coluna, int linha) {
    int i, j;
    
    for (i = 1; i <= coluna; ++i) {
        for(j = 1; j <= linha; ++j) {
            if (i > 1 & i < coluna & j > 1 & j < linha) {
                printf(" ");
                continue;
            }
            else {
                printf("%c", letra);
            }
        }
        puts(" ");
    }
}

