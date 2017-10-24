/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 16:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    
    printf("Insira valor de x: ");
    scanf("%d", &x);
    
    printf("Insira calor de y: ");
    scanf("%d", &y);
    
    if (x == 0 && y == 0){
        printf("Coordenadas (%d,%d)\n", x, y);
        printf("Encontra-se no ponto de origem 00.\n");
    }
    if (x == 0 && y > 0) {
        printf("Coordenadas (%d,%d)\n", x, y);
        printf("Encontra-se no eixo x.\n");
    }
    if (x > 0 && y == 0) {
        printf("Coordenadas (%d,%d)\n", x, y);
        printf("Encontra-se no eixo y.\n");
    }
     if (x > 0 && y > 0){
        printf("Coordenadas: (%d,%d)\n", x ,y);
        printf ("Pertence ao 1º Quandrante.\n "); 
         
    }else if (x < 0 && y > 0){
        printf("Coordenadas: (%d,%d\n)", x ,y);
        printf ("Pertence ao 2º Quandrante.\n ");
          
    }else if (x < 0 && y < 0){
        printf("Coordenadas: (%d,%d\n)", x ,y);
        printf ("Pertence ao 3º Quandrante.\n ");
          
    }else if (x > 0 && y < 0){
        printf("Coordenadas: (%d,%d)\n", x ,y);
        printf ("Pertence ao 4º Quandrante.\n ");
        
    }

    return (EXIT_SUCCESS);
}

