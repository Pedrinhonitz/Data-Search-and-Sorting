#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <float.h>
#include <time.h>
#include <string.h>

int partition(int vet[], int first, int tail) {
    int auxPivo, k, aux;
    
    auxPivo = tail;
    k = first;

    for(int i=first; i<auxPivo; i++) {
        if(vet[i] <= vet[auxPivo]) {
            aux = vet[i];
            vet[i] = vet[k];
            vet[k] = aux; 
            k++;
        }
    }

    if(vet[k] > vet[auxPivo]) {
        aux = vet[auxPivo];#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <float.h>
#include <time.h>
#include <string.h>

int partition(int vet[], int first, int tail) {
    int auxPivo, k, aux;
    
    auxPivo = tail;
    k = first;

    for(int i=first; i<auxPivo; i++) {
        if(vet[i] <= vet[auxPivo]) {
            aux = vet[i];
            vet[i] = vet[k];
            vet[k] = aux; 
            k++;
        }
    }

    if(vet[k] > vet[auxPivo]) {
        aux = vet[auxPivo];
        vet[auxPivo] = vet[k];
        vet[k] = aux; 
    }

    return k;
}

void quickSort(int vet[], int first, int tail) {
    int auxPivo;

    if(first > tail) {
        return ;
    }

    auxPivo = partition(vet, first, tail);
    quickSort(vet, first, auxPivo-1);
    quickSort(vet, auxPivo+1, tail);
}

int main() {
    int n;

    scanf("%d", &n);

    int vet[n+2];

    for(int i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Antes da Ordenação!!! \n");

    for(int i=0; i<n; i++) {
        printf("%d\n", vet[i]);
    }

    quickSort(vet, 0, n-1);

    printf("Depois da Ordenação!!! \n");

    for(int i=0; i<n; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
        vet[auxPivo] = vet[k];
        vet[k] = aux; 
    }

    return k;
}

void quickSort(int vet[], int first, int tail) {
    int auxPivo;

    if(first > tail) {
        return ;
    }

    auxPivo = partition(vet, first, tail);
    quickSort(vet, first, auxPivo-1);
    quickSort(vet, auxPivo+1, tail);
}

int main() {
    int n;

    scanf("%d", &n);

    int vet[n+2];

    for(int i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Antes da Ordenação!!! \n");

    for(int i=0; i<n; i++) {
        printf("%d\n", vet[i]);
    }

    quickSort(vet, 0, n-1);

    printf("Depois da Ordenação!!! \n");

    for(int i=0; i<n; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
