/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 3 de Novembro de 2017, 19:29
 */

#include <stdio.h>
#include <stdlib.h>
#define EPD 1.1612
#define DPE 0.86116

/*
 * 
 */
void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}


char lerChar(){
    char moeda;
    
    printf("Introduza o valor da moeda atual: ");
    
limparBufferEntrada();
    
    scanf("%c", &moeda);
    
limparBufferEntrada();
    
    return moeda;
}

double lerDouble(){
    double valor;
    
    printf("Introduza o valor: ");
    scanf("%lf", &valor);
    return valor;
}

void converter(double valor, char moeda){
    
    if( moeda=='e' || moeda=='E'){
        printf("Resultado: %.2lf $\n", valor*EPD );
    }
    else if(moeda=='d' || moeda=='E'){
        printf("Resultado: %.2lf €\n", valor*DPE );
    }
    else {
        printf("Valor invalido! Tente novamente!\n");
    }
}

int main(int argc, char** argv) {
    double valor;
    char moeda;
    
    valor=lerDouble();
    
    moeda=lerChar();
    
    converter(valor, moeda);
    
    return (EXIT_SUCCESS);
}

