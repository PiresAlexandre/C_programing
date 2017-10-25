/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 0:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float conversao_hora, media_velocidade, distancia_combustivel, duracao;
                        
        printf("Em quanto tempo pretendo realizar a viagem? (Em minutos): ");
        scanf("%f", &duracao);
    
        conversao_hora = duracao / 60;                          //Conversão de minutos para hora.
    
        media_velocidade = 130 / conversao_hora;                //Calculo da velocidade média atraves da distancia entra as duas cidades.
    
    if(media_velocidade <= 60){
        distancia_combustivel = (4 * 100) / 5;
        if(distancia_combustivel < 60){
            printf("Com apenas 4 litros não chegara a bomba de gasolina!\n");
        }else{
            printf("A velocidade menor ou igual a 60Km/H tera de parar no 3º posto de combustivel aos 79Km\n");
        }
        
    }else if(media_velocidade> 60 && media_velocidade <= 120){
        distancia_combustivel = (4 * 100) / 6;
        if(distancia_combustivel < 60){
            printf("Com apenas 4 litros não chegara a bomba de gasolina!\n");
        }else{
            printf("A velocidades entre os 60Km/H e os 120Km/H tera de parar no 2º posto de combustivel aos 70Km\n");
        }
        
    }else if(media_velocidade > 120){
        distancia_combustivel = (4 * 100) / 7;
        if(distancia_combustivel < 60){
            printf("Com apenas 4 litros não chegara a bomba de gasolina!\n");
        }else{
            printf("A velocidade superiore de 120Km/H tera de parar no 1º posto de combustivel aos 60Km\n");
        }
    }

    return (EXIT_SUCCESS);
}

