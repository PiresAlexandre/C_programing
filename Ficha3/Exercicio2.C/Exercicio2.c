/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 12:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num = 0;
    
    
    while (num <= 300){
        printf("\n%d", num);
        num += 2;
    }

    return (EXIT_SUCCESS);
}
