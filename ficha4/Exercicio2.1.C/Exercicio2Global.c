/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 7 de Novembro de 2017, 18:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int v1, v2, opcao;
double resultado;

    long soma(){
        return v1 + v2;
}
    long subtrair(){
        return v1 - v2;
}
    double multiplicar(){
        return v1 * v2;
}
    double dividir(){
        return (float)v1 / v2;
}

int main(int argc, char** argv) {

    printf("Introduza o 1º Valor: ");
    scanf("%d", &v1);

    printf("Introduza 2º Valor: ");
    scanf("%d", &v2);
    
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Mutiplicar\n");
    printf("4-Dividir\n");
    printf("Escolha opção desejada: ");
    scanf("%d", &opcao);
     
    
    switch (opcao){
        case 1:
            resultado=soma();
            break;
            
        case 2:
            resultado=subtrair();
            break;
            
        case 3:
            resultado=multiplicar();
            break;
            
        case 4:
            resultado=dividir();
            break;
            
        default:
            printf("Operação Invalida! Tente novamente!");      
    }

    printf("Resultado: %.2lf", resultado);
    return (EXIT_SUCCESS);
}
