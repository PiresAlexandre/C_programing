/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 18:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota1, nota2, nota3, media;
    
    printf("Insira primeria nota: ");
    scanf("%d", &nota1);
    
    printf("Insira segunda nota: ");
    scanf("%d", &nota2);
    
    printf("Insira terceira nota: ");
    scanf("%d", &nota3);
   
    media = (nota1 * 0.25 + nota2 * 0.35 + nota3 * 0.40)/(1);   // A média ponderada é as notas dos teste multiplicado pela percentagem de cada teste e que por sua vez a somas dos 3 teste é divido pelo valor da media ponderada (0.25+0.35+0.40=1)
    
    printf("A média ponderada é de: %d valores", media);

    
    return (EXIT_SUCCESS);
}

