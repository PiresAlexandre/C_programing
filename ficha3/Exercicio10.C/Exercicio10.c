/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 15:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    
    for (x=1; x<=10; ++x){
        printf("\nTabuada: %d\n", x);
        
        for (y=1; y<=10; ++y){
            printf("%d*%d=%d\n", x, y, x*y);
        }
    }

    return (EXIT_SUCCESS);
}

