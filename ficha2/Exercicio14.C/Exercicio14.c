/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 17:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double saldo, tipo, valor;
    
    puts ("Introduza o seu saldo bancário!");
    scanf("%lf", &saldo);
    
    puts("Insira um montante positivo ");
    scanf("%lf", &tipo);
    
    if (tipo > 0 ){
        valor = saldo + tipo;
        if(valor > saldo){
          printf ("Operação realizável!\n");  
        }else {
          printf ("Operação impossível de realizar!\n");  
        }
        printf ("O saldo após o crédito é %.2lf€!", valor);
    }
    
    if (tipo < 0 ){
        valor = saldo + tipo;
        if(valor > saldo){
          printf ("Operação realizável!\n");  
        }else {
          printf ("Operação impossível de realizar!\n");  
        }
        printf ("O saldo após o débito é %.2lf€!", valor);
    }
    
    if (tipo == 0){
        printf("O saldo assim mantém-se o mesmo! Cerca de %.2lf€", saldo);
    }

    return (0);
}

