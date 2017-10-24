/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 16:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    printf("Introduza 1 numero: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0){
        printf("O numero %d é divisivel por 3 e 5.\n", num);
    }else{
        printf("O numero %d não é divisivel por 3 e 5.\n", num);
    }

    return (EXIT_SUCCESS);
}

