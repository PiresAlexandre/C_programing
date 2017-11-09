/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 13:47
 */

#include <stdio.h>
#include <stdlib.h>
#define start 5 
#define limite 21

/*
 * 
 */

int main(int argc, char** argv) {
    int x, arr[limite];
    
    for (x = 0; x < limite; ++x) {
        arr[x] = x + start;
    }
    
    for (x = 0; x < limite; ++x) {
        printf ("%d ", arr[x]);       
    }

    return (EXIT_SUCCESS);
}

