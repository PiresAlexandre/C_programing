/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 2 de Novembro de 2017, 10:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int voto, total, cand1, cand2, cand3, cand4, nulo, branco;
    
    while (1){
        
        puts("Voto desejado [1, 2, 3, 4, 0-branco, 9-nulo]");
        puts("Insira -1 para terminar");
        scanf("%d", &voto);
        
        if (voto >= 1 && voto <= 4){    
            if (voto == 1){
                cand1 += 1;
            }else if (voto == 2 ){
                cand2 += 1;
            }else if (voto == 3 ){
                cand3 += 1;
            }else if (voto == 4 ){
                cand4 += 1;
            }
            ++total;
            
        }else if (voto == 0 || voto == 9){
            if (voto == 0){
                branco += 1;
            }else{
                nulo += 1;
            }
        ++total;
        }else{
            puts ("Voto inserido inválido!");
        }
         if(voto == -1){
            break;
        }
    }
    
    printf("O numero total de votos foi de %d.\n", total);
    
    printf("O candidato 1 teve %d votos!\n", cand1);
    printf("O candidato 2 teve %d votos!\n", cand2);
    printf("O candidato 3 teve %d votos!\n", cand3);
    printf("O candidato 4 teve %d votos!\n", cand4);
    
    printf("%d votos em brancos\n", branco);
    printf("%d votos em nulo\n\n", nulo); 
   
    
    printf("O candidato 1 teve %.2f%% votos!\n", ((float)cand1 / total)*100);
    printf("O candidato 2 teve %.2f%% votos!\n", ((float)cand2 / total)*100);
    printf("O candidato 3 teve %.2f%% votos!\n", ((float)cand3 / total)*100);
    printf("O candidato 4 teve %.2f%% votos!\n", ((float)cand4 / total)*100);
    
    printf("A percentagem de votos em branco foi de %.2f%%\n", ((float)branco / total)*100);
    printf("A percentagem de votos nulos foi de %.2f%%\n", ((float)nulo / total)*100);
    

    return (EXIT_SUCCESS);
}

