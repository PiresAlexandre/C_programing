/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 23:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float d1, d2, d3, d4, conta1, conta2, conta3, conta4, juros, jurospercentagem;
    
    printf("Introduza valor dos juros (Valor em percentagem): ");
    scanf("%f", &juros);
    jurospercentagem = juros /100;
    
    printf("Valor à depositar 1ºtrimestre: ");
    scanf("%f", &d1);
    
    conta1 = d1 * (jurospercentagem / 100);
    printf("O valor total do depósito nº1 é: %.2f €\n\n", conta1 + d1);

       
    printf("Valor à depositar 2ºtrimeste: ");
    scanf("%f", &d2);
    
    conta2 = d2 * (jurospercentagem /100);
    printf("O valor total do depósito nº2 é: %.2f €\n", conta2 + d2);
    
    printf("A sua conta contem neste momento: %.2f €\n\n", (conta1 + d1) + (conta2 + d2));
    
    printf("Valor à depositar 3ºtrimestre: ");
    scanf("%f", &d3);
    
    conta3 = d3 * (jurospercentagem / 100);
    printf("O valor total do depósito nº3 é: %.2f €\n", conta3 + d3);
    
    printf("A sua conta contem neste momento: %.2f €\n\n", (conta1 + d1) + (conta2 + d2) + (conta3 + d3));
    
    printf("Valor à depositar 4ºtrimestre: ");
    scanf("%f", &d4);
    
    conta4 = d4 * (jurospercentagem /100);
    printf("O valor total do depósito nº4 é: %.2f €\n\n", conta4 + d4);
   
    printf("A sua conta ao fim de um ano contem: %.2f €\n\n", (conta1 + d1) + (conta2 + d2) + (conta3 + d3) + (conta4 + d4));
    
    

    return (EXIT_SUCCESS);
}

