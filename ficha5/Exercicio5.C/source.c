#define LIMITE 10



void imprimirVetor(double array[]) {
    int x;
    
    printf("\n\nO conteudo do vetor: \n");
    for (x = 0; x < LIMITE; ++x) {
        printf("%.2lf ", array[x]);
    }
}

void dobroVetor(double array[]) {
    int x;
    
    puts("\n\nDobro dos numeros no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        printf("%.2lf ", 2 * array[x]);
    }
}

void somaVetor(double array[]) {
    int x, soma = 0;
    
    puts("\n\nSoma dos numeros no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        soma += array[x];
    }
    printf("%d ", soma);
}


void mediaVetor(double array[]) {
    int x, soma = 0;
    
    puts("\n\nMedia dos numeros introduzidos no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        soma += array[x];
    }
    printf("%.lf\n ", (float)soma / LIMITE);
}

void maiorVetor(double array[]) {
    int x, num = 0;
    
    puts("\n\nMaior elemento introduzido no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        if (array[x] > num) {
            num = array[x];
        }
    }
    printf("%d\n ", num);
}

void menorVetor(double array[]) {
    int x, num = array[0];
    
    printf("\nMenor elemento introduzido no vetor e %d \n", num);
    for (x = 0; x < LIMITE; ++x) {
        if (array[x] < num) {
            num = array[x];
        }
    }
    
}
