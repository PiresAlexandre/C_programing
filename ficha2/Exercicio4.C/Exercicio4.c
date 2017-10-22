/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Outubro de 2017, 0:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, numero3;
    
    printf("Insira primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Insira segundo numero: ");
    scanf("%d", &numero2);
    
    printf("Insira terceiro numero: ");
    scanf("%d", &numero3);
    
    if (numero1 > numero2 && numero2 > numero3){
     printf("O menor numero é %d\n ", numero3);   
    }else if (numero2 > numero1 && numero3 > numero1){       
     printf("O menor numero é %d\n ", numero1);
    }else{
     printf("O menor numero é %d\n", numero2);
    }
        
      return (EXIT_SUCCESS);
}

