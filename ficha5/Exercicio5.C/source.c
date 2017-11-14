#define LIMITE 10



void imprimirVetor(double arr[]) {
    int x;
    
    printf("\n\nO conteudo do vetor: \n");
    for (x = 0; x < LIMITE; ++x) {
        printf("%.2lf ", arr[x]);
    }
}

void dobroVetor(double arr[]) {
    int x;
    
    puts("\n\nDobro dos numeros no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        printf("%.2lf ", 2 * arr[x]);
    }
}

void somaVetor(double arr[]) {
    int x, soma = 0;
    
    puts("\n\nSoma dos numeros no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        soma += arr[x];
    }
    printf("%d ", soma);
}


void mediaVetor(double arr[]) {
    int x, soma = 0;
    
    puts("\n\nMedia dos numeros introduzidos no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        soma += arr[x];
    }
    printf("%.lf\n ", (float)soma / LIMITE);
}

void maiorVetor(double arr[]) {
    int x, num = 0;
    
    puts("\n\nMaior elemento introduzido no vetor: ");
    for (x = 0; x < LIMITE; ++x) {
        if (arr[x] > num) {
            num = arr[x];
        }
    }
    printf("%d\n ", num);
}

void menorVetor(double arr[]) {
    int x, num = arr[0];
    
    printf("\nMenor elemento introduzido no vetor e %d \n", num);
    for (x = 0; x < LIMITE; ++x) {
        if (arr[x] < num) {
            num = arr[x];
        }
    }
    
}
