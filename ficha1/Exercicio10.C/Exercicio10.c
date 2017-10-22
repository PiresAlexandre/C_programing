/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 18:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota1, nota2, nota3, nota4, nota5, media;
    
    printf("Insira primeira nota: ");
    scanf("%d", &nota1);
    
    printf("Insira segunda nota: ");
    scanf("%d", &nota2);
    
    printf("Insira terceira nota: ");
    scanf("%d", &nota3);
    
    printf("Insira quarta nota: ");
    scanf("%d", &nota4);
    
    printf("Insira quinta nota: ");
    scanf("%d", &nota5);
    
    media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
    
    printf("A sua média é de : %d valores", media);
    

    return (EXIT_SUCCESS);
}

