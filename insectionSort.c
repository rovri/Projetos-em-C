#include <stdio.h>

void insectionSort(int *v, int tamVetor){

    for(int i = 1; i < tamVetor; i++){

        int atual = v[i];
        int k = i;
        int j = i-1;

        while(atual < v[j] && j>=0){
            v[k] = v[j];
            j--;
            k = j+1;
            printf("iteracao while\n");
        }

        v[k] = atual;

        printf("iteracao for %i\n", k);
    }
}

int main(){

    int vetor[] = {7,2,94,15,3,8,1,4,61,5};
    int n = 10;

    insectionSort(vetor, n);

    for(int i = 0; i<n; i++){

        printf("%i, ", vetor[i]);
    }

    return 0;
}


