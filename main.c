#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *vet, int n){

    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(vet[j] > vet[j+1]) {
                swap(&vet[j], &vet[j+1]);
            }
        }
    }

}

int main() {
    int n, number, *vet;

    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Antes da ordenação\n -----------------------------------------\n");

    for(int j=0; j<n; j++ ) {
        printf("%d\n", vet[j]);
    }
    
    bubbleSort(vet, n);
    
    printf("Depois da ordenação\n -----------------------------------------\n");

    for(int j=0; j<n; j++ ) {
        printf("%d\n", vet[j]);
    }

    return 0;
}
