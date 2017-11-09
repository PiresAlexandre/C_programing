/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 9 de Novembro de 2017, 0:25
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */



int main(int argc, char** argv) {

    int ast;
    int minimo = 1;
    int maximo = 1000;

    ast = lerInteiro(minimo, maximo);
    asteriscos(ast);

    return (0);
}

