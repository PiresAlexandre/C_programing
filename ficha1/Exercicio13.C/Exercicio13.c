/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 19:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int minutos1, minutos2, minutos3, minutos4, minutos5;
    int segundos1, segundos2, segundos3, segundos4, segundos5;
    int minutost, segundost, totalcancao, hora, min, seg;
    
    printf("Indique a duração da 1º canção em: \n");
    printf("Minutos: ");
        scanf("%d", &minutos1);
    printf("Segundos: ");
        scanf("%d", &segundos1);
    
    printf("Indique a duração da 2º canção: \n");
    printf("Minutos: ");
        scanf("%d", &minutos2);
    printf("Segundos: ");
        scanf("%d", &segundos2);
        
    printf("Indique a duração da 3º canção: \n");
    printf("Minutos: ");
        scanf("%d", &minutos3);
    printf("Segundos: ");
        scanf("%d", &segundos3);
        
    printf("Indique a duração da 4º canção: \n");
    printf("Minutos: ");
        scanf("%d", &minutos4);
    printf("Segundos: ");
        scanf("%d", &segundos4);
        
    printf("Indique a duração da 5º canção: \n");
    printf("Minutos: ");
        scanf("%d", &minutos5);
    printf("Segundos: ");
        scanf("%d", &segundos5);
    
    minutost = minutos1 + minutos2 + minutos3 + minutos4 + minutos5;
    
    printf("Minutos ao total: %d\n", minutost);
    
    segundost = segundos1 + segundos2 + segundos3 + segundos4 + segundos5;
    
    if (segundost >=60 && minutost >60) {
        hora = minutost / 60;
        min = minutost%60 + segundost%3600/60;
        seg = segundost%60;
        printf("O Albun demora: %d H : %d Min : %dSeg\n",hora, min ,seg);
    } else {
        printf("O Albun demora: %d H : %d Min : %dSeg\n",hora, minutost, segundost);
        
   }
  
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}

