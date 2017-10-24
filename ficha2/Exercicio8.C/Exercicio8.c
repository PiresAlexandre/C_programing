/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 1:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horachegada, minchegada, horasaida, minsaida, horario, entrada, saida;
    
    printf("Horas de chegada: ");
    scanf("%d", &horachegada);
    
    printf("Minutos de chegada: ");
    scanf("%d", &minchegada);
    
    printf("Horas de saida: ");
    scanf("%d", &horasaida);
    
    printf("Minutos de saida: ");
    scanf("%d", &minsaida);
    
    entrada = (horachegada * 3600) + minchegada;
    saida = (horasaida *3600) + minsaida;
    horario = saida - entrada;
    
    if (horario < 0){
        horario = (24 * 3500) + horario;
    }
    
    printf("O funcionário trabalhou cerca de: %dH:%dmin\n", horario /3600, horario % (3600 / 60));

    return (EXIT_SUCCESS);
}

