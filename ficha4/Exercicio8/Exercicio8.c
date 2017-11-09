/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 0:41
 */

#include <stdio.h>
#include <stdlib.h>
#define N_alunos 10

/*
 * 
 */

int main(int argc, char** argv) {
    int x, nota, contador, minimo = 0, maximo = 20;
    
    for(x = 0; x <= N_alunos; ++x ){
        nota =lerInteiro(minimo, maximo);
        contador += nota;
    }
 
    return (0);
}

int lerInteiro(int minimo, int maximo) { 
    int nota;
    
    while (1) {
        
        puts("Introduza nota obtida: ");
        scanf("%d", &nota);
        
        if (nota >= minimo && nota <= maximo) {
            break;
        } else {
            printf("Nota inválida! Tente novamente!\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

