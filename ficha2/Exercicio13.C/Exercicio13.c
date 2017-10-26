/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 17:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int temp_ideal;
    float temp_atual, diferenca;
    
    puts("Qual é a temperatura atual?");
    scanf("%f", &temp_atual);
    
    puts("Qual é a temperatura ideal?");
    scanf("%d", &temp_ideal);
    
    if (temp_ideal < temp_atual){
        diferenca = temp_atual - temp_ideal;   
        printf("Para reduzir a temperatura até a desejada necessitará de %.0fs\n", diferenca * 120);
    }
    
    if (temp_ideal > temp_atual){
        diferenca = temp_ideal - temp_atual;   
        printf("Para aumentar a temperatura até a desejada necessitará de %.0fs\n", diferenca * 180);
    }
    return (EXIT_SUCCESS);
}

