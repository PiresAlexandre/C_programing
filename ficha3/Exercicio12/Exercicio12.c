/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 2 de Novembro de 2017, 9:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int soma, total, numero;

    do{
        printf("Insira um numero (inclua -1 na sua media): ");
        scanf("%d", &numero);
        
        if (numero == -1){
            printf("A media dos valores é %.2lf\n", (float)soma / total);
        }else{
        soma += numero;
        total++;
        }
    }
    
    while (numero != -1);

    return (EXIT_SUCCESS);
}

