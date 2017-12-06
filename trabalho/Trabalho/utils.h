/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   utils.h
 * Author: Alexandre
 *
 * Created on 5 de Dezembro de 2017, 18:48
 */

#ifndef UTILS_H
#define UTILS_H
#define TAM_MATRIZ 10
#define TOKENS 2

    void clean_buffer();
    void printMatriz(char matriz[][TAM_MATRIZ]);
    void apresentacao();
    void criarMatriz(char matriz[][TAM_MATRIZ]);
    void token_escolhido(char tokens[]);
    void jogadas(char matriz[][TAM_MATRIZ], char tokens[]);

#endif /* UTILS_H */

