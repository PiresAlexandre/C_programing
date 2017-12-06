#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAM_MATRIZ 10
#define TOKENS 2


void clean_buffer() {                                  //FUNCAO PARA LIMPAR O BUFFER
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void printMatriz(char matriz[][TAM_MATRIZ]){
    int i,j;
    
    for(i=0; i< TAM_MATRIZ; ++i){                      //IMPRIME A MATRIZ DESEJADA 
        for(j=0; j< TAM_MATRIZ; ++j){
            printf("%c|", matriz[i][j]);
            
        }
        puts(" ");
    }
    
}

void apresentacao()                 //MENU DE APRESENTACAO DO JOGO COISA SIMPLES
{
    printf("\t\t\tJOGO 3 EM LINHA!\n\t\tBOA SORTE PARA OS DOIS JOGADORES\nSE VIR QUE O SEU ADVERSARIO É FORTE DEMAIS, DESISTA INTRODUZINDO Z0 \n\t\t\t\t;)");
    printf("\n");
    printf("\n");
}

void criarMatriz(char matriz[][TAM_MATRIZ]){
    int i, j, linha_principal = 65, coluna_num = 49;  /*CONVERTER CARATERES....RECORRI A TABELA ASCII E ALGUNS APUNTAMENTOS NO GOOGLE PARA UTILIZAR A SEGUINTE FUNCAO ASSIM COMO AS FICHAS REALIZADAS
                                                       http://ic.unicamp.br/~everton/aulas/hardware/tabelaASCII.pdf*/
    
    
    for(i = 1; i < TAM_MATRIZ; ++i){ matriz[0][i] = linha_principal;      //PRENCHER A LINHA PRINCIPAL COM LETRAS 
        ++linha_principal;
    }
    
    
    for(i = 1; i < TAM_MATRIZ; ++i){ matriz[i][0]=coluna_num;           //PRENCHER A COLUNA PRINCIPAL COM NUMEROS
        ++coluna_num;
    }
    
    
    for(i = 1; i < TAM_MATRIZ; ++i){                                     //PRENCHER OS ESPACOS VAZIOS COM O SIMBOLO ASSINALADO
        for(j = 1; j < TAM_MATRIZ; ++j){ 
            matriz[i][j]='_';
            
        }
    }
    
            matriz[0][0]= ' ';              
    
}

void token_escolhido(char tokens[]){
    int i;
    
    
    for(i = 0; i < TOKENS; ++i){            //OS JOGADORES ESCOLHEM CADA UM OS SEUS TOKENS É ACEITE NUMEROS ASSIM COMO LET
        printf("Jogador %d escolha o seu token: ", i+1);
        scanf("%c", &tokens[i]);
        
        if(tokens[1] == tokens[0]){ i-=1;
            puts("TOKENS IGUAIS! Escolha diferente.");  //O CICLO REPETE ATE O JOGADOR 2 METER UM TOKEN DIFERENTE DO DO PRIMEIRO
            
            clean_buffer();
            continue;
        }
        clean_buffer();
    }
    puts("");
    
}

int vitoria(char matriz[][TAM_MATRIZ], char tokens){
    int i,j;
    
    /* UTILIZEI OS LINK ABAIXO ASSINALADOS PARA TIRAR DUVIDAS PARA REALIZAR A VERIFICACAO DA VITORIA,  
     * https://www.portugal-a-programar.pt/forums/topic/49616-ajuda-no-jogo-4-em-linha/
       https://forum.zwame.pt/threads/ajuda-no-jogo-4-em-linha-liguagem-c.698965/*/
    
    
    
    for(i = 1; i < TAM_MATRIZ ; ++i){                     //VERIFICACAO DAS COLUNAS 
        
        for(j = 1; j < (TAM_MATRIZ - 2); ++j){
            
             if(matriz[i][j] == tokens && 
                     matriz[i][j] == matriz[i][j+1] && 
                     matriz[i][j] == matriz[i][j+2]){
                 return 1;
             }
        }
    }
    
    for(i = 1; i<(TAM_MATRIZ - 2); ++i){                //VERIFICACAO DAS LINHAS
        
        for(j = 1; j< TAM_MATRIZ; ++j){
            
             if(matriz[i][j] == tokens && 
                     matriz[i][j] == matriz[i+1][j] && 
                     matriz[i][j] == matriz[i+2][j]){
                 return 1;
             }     
        }
    }
       
    for(i = 1; i < (TAM_MATRIZ- 2); i++){                 //DIAGONAIS (DIREITAS -> ESQUERDA)
        
        for(j = 1; j<(TAM_MATRIZ - 2); j++){
            
             if(matriz[i][j+2] == tokens && 
                     matriz[i][j+2]==matriz[i+1][j+1] && 
                     matriz[i][j+2] == matriz[i+2][j]){
                 return 1;
             }
                 
        }
    }
       
    for(i = 1; i<(TAM_MATRIZ - 2); ++i){                //DIAGONAIS (ESQUERDA -> DIREITA)
        
        for(j = 1; j<(TAM_MATRIZ - 2); ++j){
            
             if(matriz[i][j] == tokens && 
                     matriz[i][j] == matriz[i+1][j+1] && 
                     matriz[i][j] == matriz[i+2][j+2]){
                 return 1;
             }  
        }
    }
       
    return 0;
}

int verificarjogadas(char matriz[][TAM_MATRIZ], char tokens, char coluna, int linha){
                                                     /*TENTEI FAZER UM CICLO MAS NAO CONSEGUI IMPLEMENTA-LO POR AQUI
                                                     EU SEI QUE O PROFESSOR PEDIU PARA SERMOS CALACEIROS MAS AINDA NAO ENCONTREI 
                                                     UMA MANEIRA DE FAZE-LO E ENTAO MANDEI O TRABALHO ASSIM*/
    
                                                    //https://forum.zwame.pt/threads/ajuda-no-jogo-4-em-linha-liguagem-c.698965/
                                                    //UILIZEI ESTE SITE PARA ME AJUDAR A VERIFICAR SE OS DADOS INSERIDOS PODIAM SER UTILIZADOS 
                                                    //FIZ O PRIMEIRO E DEPOIS FIZ PARA CADA COLUNA
    
    if(coluna == 'a' || coluna == 'A'){                 
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][1] == '_'){ matriz[linha][1] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0;  
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'b' || coluna == 'B'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][2] == '_'){ matriz[linha][2] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'c' || coluna == 'C'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][3] == '_'){ matriz[linha][3] = tokens;
              return 1;   
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'd' || coluna == 'D'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][4] == '_'){ matriz[linha][4] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'e' || coluna == 'E'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][5] == '_'){ matriz[linha][5] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'f' || coluna == 'F'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][6]=='_'){ matriz[linha][6] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'g' || coluna == 'G'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][7]=='_'){ matriz[linha][7] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0; 
    }
    
    else if(coluna == 'h' || coluna == 'H'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][8] == '_'){ matriz[linha][8] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("PPosicao inserida nao existente.");
                    return 0;
    }
    
    else if(coluna == 'i' || coluna == 'I'){
        
        if(linha > 0 && linha < 10){
            
            if(matriz[linha][9] == '_'){ matriz[linha][9] = tokens;
              return 1;  
            }
                puts("Posicao Ocupada. Tente outra.");
                return 0; 
        }
                    puts("Posicao inserida nao existente.");
                    return 0;
    }
    
    else if(coluna == 'Z' || coluna == 'z'){            //DESISTIR DANDO A VITORIA AO OPONENTE UTILIZANDO COLUNA Z LINHA 0
        if(linha == 0){            
            return 10; 
        }
                puts("Posicao Ocupada. Tente outra.");
                return 0;
    }else{
                    puts("Posicao inserida nao existente.");
                    return 0;  
    }
    
}

void jogadas(char matriz[][TAM_MATRIZ], char tokens[]){
    int jogador1 = 0, jogador2 = 0, verificacao = 1, linha, jogo1 = 0, jogo2 = 0;
    char coluna; 
    
    /*APOEI-ME NA AJUDA DESTES SITES PARA SABER COMO IRIA FAZER A SEGUINTE FUNCAO
     http://respostas.guj.com.br/6696-verificar-quem-ganhou-em-jogo-da-velha/
     https://www.portugal-a-programar.pt/forums/topic/74207-fun%C3%A7%C3%A3o-para-verificar-vit%C3%B3ria-em-jogo/*/
       
    while(1){           //CORRER AS JOGADAS ATRAVES DE UM LOOP
         while(1){                       //COORDENADAS DO JOGADOR 1
            if (verificacao == 0){
                clean_buffer();
            }
                    puts("\nJogador 1");
                    printf("Introduza coluna: ");
                    scanf("%c", &coluna);                              
                    printf("\nIntroduza linha: ");
                    scanf("%d", &linha);
            
                verificacao = verificarjogadas (matriz, tokens[0], coluna, linha);
            
            if (verificacao == 0){ continue;
            }else if (verificacao == 10){
                            ++jogador2;
                    break;
            }else{ 
                printMatriz(matriz);
                puts("");
                                                 
                    jogador1 = vitoria (matriz, tokens[0]);
                    ++jogo1;
                break;
            }            
        }
        
        //QUANDO O JOGADOR GANHA COM CONTADOR DE JOGADAS
            if (jogador1 > 0){ printf("\nGanhou o jogador 1. Jogadas realizadas: %d\n", jogo1);
                break;
        }
            if (jogador2 > 0){ printf("\nGanhou o jogador 2. Jogadas realizadas: %d\n", jogo2);
                break;
        }
               
        while(1){                               //COORDENADAS DO JOGADOR 2 
            clean_buffer();            
                    puts("\nJogador2");  
                    printf("\nIntroduza coluna: ");
                    scanf("%c", &coluna);           
                    printf("\nIntroduza linha: ");
                    scanf("%d", &linha);
            
                verificacao = verificarjogadas (matriz, tokens[1], coluna, linha);
            
            if (verificacao == 0){ continue;
            } else if (verificacao == 10){
                            ++jogador1;
                    break;
            }else{
                printMatriz(matriz);
                puts("");
                                                    
                    jogador2 = vitoria(matriz, tokens[1]);
                    ++jogo2;
                break;
            }
        }
           
        //QUANDO O JOGADOR GANHA COM CONTADOR DE JOGADAS REALIZADAS
            if (jogador1 > 0){ printf("\nGanhou o jogador 1. Jogadas realizadas: %d\n", jogo1);          
                break;
        }
            if (jogador2 > 0){ printf("\nGanhou o jogador 2. Jogadas realizadas: %d\n", jogo2);
                break;
        }               
    }
}