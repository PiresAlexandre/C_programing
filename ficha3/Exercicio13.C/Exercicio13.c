/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 2 de Novembro de 2017, 9:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota;
    
    while(1){
    
        puts("Nota obtida (Introduza valores entre 0 e 20): ");
        scanf ("%d", &nota);

        if(nota >= 0 && nota <= 20){
            if(nota > 9.5){
                printf("APROVADO com %d valores", nota);    
            }else{
                printf("REPROVADO com %d valores", nota);
            } break;
            
        }else{
            puts ("Operacao invalida, tente novamente!");
        }
    }

    return (EXIT_SUCCESS);
}

