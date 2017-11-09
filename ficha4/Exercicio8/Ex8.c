#include <stdio.h>
#include <stdlib.h>




int lerInteiro(int minimo, int maximo) { 
    int nota;
    
    while (1) {
        
        puts("Introduza nota obtida: ");
        scanf("%d", &nota);
        
        if (nota >= minimo && nota <= maximo) {
            break;
        } else {
            printf("Nota inválida! Tente novamente!\n");
        }
    }
    
    return (EXIT_SUCCESS);
}