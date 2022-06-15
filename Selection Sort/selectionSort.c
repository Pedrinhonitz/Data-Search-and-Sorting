#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys\timeb.h>


void troca(int maior, int i, int* vet){
    int aux;
    aux = vet[maior];
    vet[maior] = vet[i];
    vet[i] = aux;
}


void ordenar(int* vet, int n){
    long long comparacoes = 0, trocas = 0;
    int i, j, maior;
    for(i = 0; i < n-1; i++){
        maior = i;
        for(j = i; j < n; j++){
            comparacoes++;
            if(vet[maior] > vet[j]){
                maior = j;
            }
        }
        if(maior != i){
            trocas++;
            troca(maior, i, vet);
        }
    }
    printf("Comparacoes: %lld\n", comparacoes);
    printf("Trocas: %lld\n", trocas);
}


void print_vet(int* vet, int n){
    int i;
   
    for(i = 0; i < n; i++){
        printf("%d, ", vet[i]);
    }
}


int main(){
    struct timeb start, end;
    int diff;
    int n, i;
    int *vet;

    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    

    ftime(&start);

    ordenar(vet, n);

    ftime(&end);
    diff = (int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm));

    printf("\nGastou %u milisegundos\n", diff);   

    
    
    return 0;
}