/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 2:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int raio, perimetro, area;
    float PI = 3.14;
    
    
    printf("Introduza o valor do raio: ");
    scanf("%d", &raio);
    
    perimetro = (2 * PI) * raio;
    
    area = PI * (raio * raio);
    
    printf ("(2 * PI) * %d = %d\n",raio,perimetro);
       
    printf ("PI * (%d * %d) = %d\n",raio,raio,area);
    
    printf ("O valor do perimetro é: %d\n", perimetro); 
    
    printf ("O valor da area é: %d\n", area);
       

    return (EXIT_SUCCESS);
}

