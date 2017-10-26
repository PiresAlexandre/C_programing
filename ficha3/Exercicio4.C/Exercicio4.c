/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 14:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    int soma;
    
    for (num = 1; num <= 100; ++num){
        printf("%d\n", num);
        soma += num;
    }
    
    printf("A soma é: %d\n", soma);

    return (EXIT_SUCCESS);
}

