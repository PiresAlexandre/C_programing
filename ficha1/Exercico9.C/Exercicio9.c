/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 18:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int IMC, massa, alt;
    
    printf("Indique a sua massa: ");
    scanf("%d", &massa);
    
    printf("Indique a sua altura: ");
    scanf("%d", &alt);
    
    IMC = massa / (alt * alt);
    
    printf("O seu IMC é de: %d", IMC);
           
      
    
    

    return (EXIT_SUCCESS);
}

