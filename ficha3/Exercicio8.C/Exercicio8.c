/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 15:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int limite, i;
    
    printf("Introduza um limite: ");
    scanf("%d", &limite);
    
    for (i=1; i<=limite; ++i){
        printf("%d ", i * 2);
    }

    return (EXIT_SUCCESS);
}

