/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 16 de Novembro de 2017, 10:30
 */

#include <stdio.h>
#include <stdlib.h>
#define LIMITE 10

/*
 * 
 */

//Conteudo do array A

int arrayA(int arrayA[]) {
    int x;
    
    for (x = 0; x < LIMITE; ++x) {
        puts("Introduza um numero array A: ");
        scanf("%d", &arrayA[x]);
    }
    return arrayA[x];
}

//Conteudo do array B

int arrayB(int arrayB[]) {
    int x;
    
    for (x = 0; x < LIMITE; ++x) {
        puts("Introduza um numero array B: ");
        scanf("%d", &arrayB[x]);
    }
    return arrayB[x];
}

//Imprimir o conteudo do Array A

void imprimirarrayA(int arrayA[]) {
    int x;
    
    for (x = 0; x < LIMITE; x++) {
        printf(" %d |", arrayA[x]);
    }
}

//Imprimir o conteudo do Array B

void imprimirarrayB(int arrayB[]) {
    int x;
    
    for (x = 0; x < LIMITE; x++) {
        printf(" %d |", arrayB[x]);
    }
}

//ARRAY C

void arrayC(int arrayC[], int arrayA[], int arrayB[]) {
    int i, j;

    for (i = 0; i < LIMITE; ++i) {
        arrayC[i] = arrayA[i];
        printf(" %2d |", arrayC[i]);
    }
    
    for (j = 0; j < LIMITE; ++j) {
        arrayC[j] = arrayB[j];
        printf(" %2d |", arrayC[j]);
    }
}

//Array D

void arrayD(int arrayA[], int arrayB[], int arrayD[]) {
    int i, j, cont = 0, cont_array = 0;
    
    for (i = 0; i < LIMITE; ++i) {
        for (j = 0; j < LIMITE; ++j) {
            if (arrayA[i] == arrayB[j]) {
                break;
            } else {
                cont += 1;
            }
        }
        if (cont == 10) {
            arrayD[cont_array] = arrayA[i];
            cont_array += 1;
        }
        cont = 0;
    }

    for (i = 0; i < cont_array; ++i) {
        printf(" %d |", arrayD[i]);
    }
}

//Array E

void arrayE(int arrayA[], int arrayB[], double arrayE[]) {
    int i, j, k, cont = 0, verify = 0;

    for (i = 0; i < LIMITE; ++i) {
        arrayE[i] = 0.5;
    }

    for (i = 0; i < LIMITE; ++i) {
        
        for (j = 0; j < LIMITE; ++j) {
            
            if (arrayA[i] == arrayB[j]) {
                verify = 0;
                
                for (k = j; k < LIMITE; ++k) {
                    
                    if (arrayA[i] == arrayA[k]) {
                        verify += 1;
                    }
                }
                
                if (verify == 1) {
                    arrayE[cont] = arrayA[i];
                    cont += 1;
                }
            }
        }
    }
    for (i = 0; i < LIMITE; ++i) {
        if (arrayE[i] == 0.5) {
            continue;
        } else {
            printf(" %.0lf |", arrayE[i]);
        }
    }
}

int main(int argc, char** argv) {
    int arrA[LIMITE], arrB[LIMITE], arrC[LIMITE], arrD[LIMITE], arrE[LIMITE];
    
    arrayA(arrA);
    puts("\n");
    arrayB(arrB);
    
    puts("\n!Resultados!");
    puts("\nVetor A: ");
    imprimirarrayA(arrA);
    puts("\n");
    
    puts("Vetor B: ");
    imprimirarrayB(arrB);
    puts("\n");
    
    puts("Vetor C uniao A e B: ");
    arrayC(arrC,arrA,arrB);
    puts("\n");
    
    puts("Vetor D que contem A mas nao B: ");
    arrayD(arrA,arrB,arrD);
    puts("\n");
    
    puts("Vetor E com elementos comuns dos vetores A e B sem que existam elementos");
    arrayE(arrA,arrB,arrE);
    puts("\n");


    return (EXIT_SUCCESS);
}