#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys\timeb.h>

void ordenar(int* vet, int n){
    long long int i, j, aux, comparacoes = 0, troca = 0;

    for(i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            comparacoes++;

            if(vet[j] > vet[j+1]){
                troca++;

                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("Quantidade de comparacoes: %lld\n", comparacoes);
    printf("Quantidade de trocas: %lld\n", troca);
}


void print_vet(int* vet, int n){
    int i;
   
    for(i = 0; i < n; i++){
        printf("%d, ", vet[i]);
    }
}


int main(){
    int n, i;
    int *vet;
    struct timeb start, end;
    int diff;
    

    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    //printf("Vetor: ");
    //print_vet(vet, n);
    //printf("\n");

    ftime(&start);

    ordenar(vet, n);

    ftime(&end);
    diff = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));

    printf("\nGastou %u milisegundos\n", diff);    

    //printf("Vetor ordenado: ");
    //print_vet(vet, n);
    //printf("\n");
    return 0;
}

// gcc bubble_sort.c -Wall -o prog
// ./prog < in > out