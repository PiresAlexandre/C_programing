/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 3:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int F, C;
    
    printf("Introduza temperatura em F: ");
    scanf("%d", &F);
    
    C = (F - 32) * 5/9;
    
    printf("(%d - 32)*(5/9) = %d", F, C);

    return (EXIT_SUCCESS);
}

