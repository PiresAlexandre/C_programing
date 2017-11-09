/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 0:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {
    int num;
    const int n_inicio = 0;  
    
    printf("Introduza o numero limite de impressao: ");
    scanf("%d", &num);
    
    const int n_final = num;
    
    for (n_inicio; n_final >= (num - n_final) ; ++num) {
        printf("Nº %d\n", num - n_final);
    }
    
    return (EXIT_SUCCESS);
}
