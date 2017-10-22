/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 3:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int base, alt, area;
    
    printf("Introduz valor da base: ");
    scanf("%d", &base);
    
    printf("Introduza valor da altura: ");
    scanf("%d", &alt);
    
    area = (base * alt)/2;
    
    printf("(%d * %d)/2 = %d\n",base,alt,area);
    
    printf("O valor da area é: %d", area);

    return (EXIT_SUCCESS);
}

