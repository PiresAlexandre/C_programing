/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Outubro de 2017, 0:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float numero1, numero2;
    char op;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &numero2);
    
    printf("Insira a operacao a executar (+ , - , / , *): ");
    scanf("%s", &op);
    
    switch (op){
            case '+':
                printf("O resultado da soma = %.2f\n", numero1 + numero2);
                break;
            case '-':
                printf("O resultado da subtracao = %.2f\n", numero1 - numero2);
                break;
            case '/':
                printf("O resultado da divisao = %.2f\n", numero1 / numero2);
                break; 
            case '*':
                printf("O resultado da multiplicacao = %.2f\n", numero1 * numero2);
                break;
            default :
                puts("OPÇÃO INVÁLIDA!!!!!!");
    }
    
    

    return (EXIT_SUCCESS);
}

