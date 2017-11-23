/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 11:53
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#define LIMITE 25

/*
 * 
 */

int main(int argc, char** argv) {
    char frase[LIMITE];
    int posicao, posicao_final, x;
    
    printf("Escreva o seu nome: ");
    lerString(frase, LIMITE);
    
    posicao = lastIndex(' ',frase,LIMITE);
    
    posicao_final = strlen(frase);
    
    printf("Nome: ");
        for(x = posicao; x < (posicao_final); ++x){
            printf("%c", frase[x]);
    }
    printf(" ");
        for(x = 0; x < posicao; ++x){
            printf("%c", frase[x]);
    }


    return (EXIT_SUCCESS);
}

