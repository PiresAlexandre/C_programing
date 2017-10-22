/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 22:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float combustivel, hora, min, distancia, hora2, min2, tempo, tempo2, tempof, velocidade, consumo;
    
    printf("Conbustivel gasto (L): ");
    scanf("%f", &combustivel);
    
    printf("Hora de partida: ");
    scanf("%f", &hora);
    
    printf("Minutos de partida: ");
    scanf("%f", &min);
    
    printf("Horas de partida: %.0f H %.0f min\n", hora, min);
    
    printf("Hora de chegada: ");
    scanf("%f", &hora2);
    
    printf("Minutos de chegada: ");
    scanf("%f", &min2);
    
    printf("Horas de partida: %.0f H %.0f min\n", hora2, min2);
    
    printf("Distancia percorrida (KM): ");
    scanf("%f", &distancia);
    
    tempo = (hora2 - hora);
    
    tempo2 = (min2 - min) / 60;
    
    tempof = tempo2 + tempo;
    
    printf("Tempo de Viagem: %.0f H %.0f min\n", tempo, tempo2);
    
    velocidade = distancia / tempo;
    
    printf("Velocidade Instantanea: %.2f km/h\n", velocidade);
    
    consumo = combustivel / distancia;
    printf("Consumo médio do automovel: %.2f L/km\n", consumo);
    


    return (EXIT_SUCCESS);
}

