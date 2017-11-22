/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;

}

void countChar(char frase1[], char caracter) {
    int i = 0, contador = 0;

    for (i; i < MAX; ++i) {
        if (frase1[i] == caracter) {
            contador++;
        }
    }
    printf("Nº de letras correspondentes ao caracter introduzido %c : %d", caracter, contador);
}