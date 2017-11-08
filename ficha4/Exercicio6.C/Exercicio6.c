/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 8 de Novembro de 2017, 21:18
 */


/*
 * 
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char letra;
    int coluna, linha;

    printf("Insira a letra que pretende desenhar: ");
    scanf("%c", &letra);

limparBufferEntrada();

    printf("Insira o numero de linhas que pretende imprimir: ");
    scanf("%d", &linha);

    printf("Insira o numero de colunas que pretende imprimir: ");
    scanf("%d", &coluna);

    desfigura(letra, linha, coluna);

    return (EXIT_SUCCESS);
}
   
