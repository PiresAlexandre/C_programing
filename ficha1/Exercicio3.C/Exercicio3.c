/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 2:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int base, alt, area, perimetro;
    
    printf("Introduza a base: ");
    scanf("%d", &base);
    
    printf("Introduza a altura: ");
    scanf("%d", &alt);
    
    area = base * alt;
    
    printf("%d * %d = %d\n", base,alt,area);
    
    perimetro = base + alt + base + alt;
    
    printf("%d + %d + %d + %d = %d\n", base,alt,base,alt,perimetro);
    
    printf("A area do retangulo é: %d\n", area);
    
    printf("O perimetro do retangulo é: %d\n", perimetro);
    

    return (EXIT_SUCCESS);
}

