/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 3 de Novembro de 2017, 20:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

double Notas(int n){
    int x;
    double notas; 
    double soma;
    
    for(x=0; x<n; ++x){
        printf("Introduza a nota %d: ", x+1);
        scanf("%lf", &notas);
        soma = soma + notas;
    }
    
    return soma/n;
}

int main(int argc, char** argv) {
    int n;
    double media;
    
    printf("Introduza um valor: ");
    scanf("%d", &n);
    
    media=Notas(n);
    
    printf("A sua média é de: %.2lf valores", media);
    
    return (EXIT_SUCCESS);
}
    
