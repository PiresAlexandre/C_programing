/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 2 de Novembro de 2017, 10:35
 */

#include <stdio.h>
#include <stdlib.h>

#define salario_min_nacional 558

/*
 * 
 */

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    int idade, estado_civil, contador = 1, maioridade = 0, menoridade = 150;
    int femenino_salario, masculino_casado;
    char sexo;
    double salario, cont_salario, salfinal_conta;

    while (1) {
        printf("\nPesquisa numero %d\n ", contador);
        puts("Para terminar a insercao de dados introduza um numero negativo!!\n");

        puts("Introduza a sua idade [entre 16 e 150]: ");
        scanf("%d", &idade);


        if (idade >= 16 && idade <= 150) {
        } else if (idade < 0) {
            puts("Idade negativa introduzida, o programa ira encerrar\n ");
            break;
        } else {
            puts("Valor nao admitido dentro dos paramentros! ");
            contador = contador - 1;
        }

    limparBufferEntrada();

        puts("Introduza o seu sexo (M ou F): ");
        scanf("%c", &sexo);


        if (sexo == 'M') {
        } else if (sexo == 'F') {
        } else {
            puts("Sexo invalido! ");
            break;
        }

    limparBufferEntrada();

        puts("Introduza o seu estado civil (Solteiro: 1, Casado: 2, Divorciado: 3, Viuvo: 4): ");
        scanf("%d", &estado_civil);

        if (estado_civil >= 1 && estado_civil <= 4) {           //insercao do dados de estado civil
            if (estado_civil == 1) {
            } else if (estado_civil == 2) {
            } else if (estado_civil == 3) {
            } else if (estado_civil == 4) {
            }
        }

    limparBufferEntrada();

        puts("Introduza o seu salario [maior que o salario nacional]: ");
        scanf("%lf", &salario);
 
        if (salario > salario_min_nacional) {       //calcular salario
            ++cont_salario;
            salfinal_conta += salario;
        } else {
            puts("Introduziu um salario invalido! ");
        }

        if (idade > maioridade) {               //menor e maior idade calculo 
            maioridade = idade;
        }  
        if (idade < menoridade) {
            menoridade = idade;
        }        
        if (sexo == 'F' && salario <= 1500) {
            femenino_salario++;
        }
        if (sexo == 'M' && idade >= 18 && idade <= 35 && estado_civil == 2) {
            masculino_casado++;
        }
    limparBufferEntrada();
        ++contador;
    }
    
    //respostas as perguntas no final da ficha3
    
    printf("A idade menor e de: %d\n ", menoridade);
    printf("A idade maior e de: %d\n ", maioridade);
    printf("A media dos salarios e de %.1lf euros\n ", salfinal_conta / cont_salario);
    printf("Existe(m) %d pessoa(s) do sexo feminino com ordenados até 1500 euros\n", femenino_salario);
    printf("Existe(m) %d pessoa(s) do sexo masculino entre os 18 e 35 anos e que tambem sejam casados\n", masculino_casado);
          

    return (EXIT_SUCCESS);
    
}


