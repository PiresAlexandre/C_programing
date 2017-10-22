/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 19:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int seg, min, horas;
    
    printf("Insira os segundos desejados: ");
    scanf("%d", &seg);
    
    min = seg / 60;
    
    horas = seg /3600;
    
    printf("O valor introduzido é de: %d horas : %d min : %d seg", horas, min, seg);

    return (EXIT_SUCCESS);
}

