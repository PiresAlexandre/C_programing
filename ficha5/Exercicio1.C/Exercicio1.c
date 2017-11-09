/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 12:14
 */

#include <stdio.h>
#include <stdlib.h>
#define limite 20

/*
 * 
 */

int main(int argc, char** argv) {
    int x = 0;
    int arr[limite];
    
    for (x = 0; x < limite; ++x) {arr[x] = x;}
    
    for (x = 0; x < limite; ++x) { 
        
        printf("%d ", arr[x]);}

    return (EXIT_SUCCESS);
}

