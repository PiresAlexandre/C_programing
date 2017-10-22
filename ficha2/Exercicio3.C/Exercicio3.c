/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Outubro de 2017, 0:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota1, nota2, nota3, media;
    
    printf("Insira 1º nota: ");
    scanf("%d", &nota1);
    
    printf("Insira 2º nota: ");
    scanf("%d", &nota2);
    
    printf("Insira 3º nota: ");
    scanf("%d", &nota3);
    
    media = (nota1*0.25) + (nota2*0.35) + (nota3*0.40);
    
    if (media >= 10){
        printf("O aluno esta aprovado com: %d Valores\n", media);
    }else{
        printf("O aluno esta reprovado com: %d Valores\n", media);
    }
            
    

    return (EXIT_SUCCESS);
}

