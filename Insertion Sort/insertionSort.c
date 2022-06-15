#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys\timeb.h>


void ordenar(int* vet, int n){
    int i, j, aux, temp;
    long long int comparacoes = 0, trocas = 0;

    for(i = 1; i < n; i++){
        aux = vet[i];
        for(j = i; j > 0; j--){ 
            comparacoes++;
            if(vet[j-1] > aux){
                trocas++;
                vet[j] = vet[j-1];
                if(j-1 == 0){
                    vet[j-1] = aux;
                }
            } else {
                trocas++;
                vet[j-1] = aux;
            }
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