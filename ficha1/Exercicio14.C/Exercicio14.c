/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 19:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float cand1, cand2, cand3, cand4, cand5, soma;
    
    
    printf("Numero de votos candidato 1: ");
    scanf("%f", &cand1);
    
    printf("Numero de votos candidato 2: ");
    scanf("%f", &cand2);
    
    printf("Numero de votos candidato 3: ");
    scanf("%f", &cand3);
    
    printf("Numero de votos candidato 4: ");
    scanf("%f", &cand4);
    
    printf("Numero de votos candidato 5: ");
    scanf("%f", &cand5);
    
    printf("\n");
    
    soma = cand1 + cand2 + cand3 + cand4 + cand5;
    
    
    printf("Percentagem de votos do candidato 1: %.f %%\n", (cand1 / soma) * 100);
    
    printf("Percentagem de votos do candidato 2: %.f %%\n", (cand2 / soma) * 100);
    
    printf("Percentagem de votos do candidato 3: %.f %%\n", (cand3 / soma) * 100);
    
    printf("Percentagem de votos do candidato 4: %.f %%\n", (cand4 / soma) * 100);
    
    printf("Percentagem de votos do candidato 5: %.f %%\n", (cand5 / soma) * 100);
    

    return (EXIT_SUCCESS);
}

