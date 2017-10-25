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
    double saldo, montante, final;
   
    printf("Introduza saldo da sua conta: ");
    scanf("%lf", &saldo);
    
    printf("Introduza o montante a debitar ou creditar (- ou +): ");
    scanf("%lf", &montante);
    
    final = saldo + montante;
    
    if(final < 0){
        printf("Operação Inválida. Tente novamente por favor.\n");
        
    }else if(final < saldo){
        printf("Debito realizado com sucesso. \nPossui atualmente cerca de %.2lf€ na conta.\n", final);
        
    }else{
        printf("Credito realizado com sucesso. \nPossui atualmente cerca de %.2lf€ na conta.\n", final);
    } 

    return (EXIT_SUCCESS);
    
}

