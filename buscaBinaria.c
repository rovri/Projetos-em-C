#include <stdio.h>

int main(){

    int buscaBinaria(int num, int *vetor, int vTam);
    int v[5000]; //Ao adicionar mais um zero, o programa nem roda.
    int vTam = 5000;
    int num;

    for(int i = 0; i < 5000; i++){

        v[i] = i * 2;
    }

    printf("Qual numero voce deseja procurar?\n");
    scanf("%i", &num);

    printf("%i", buscaBinaria(num, v, vTam));

    return 0;
}

int buscaBinaria(int num, int *vetor, int vTam){

    int esquerda = 1;
    int meio = (esquerda + vTam) /2;

    while(esquerda < vTam){

        meio = (esquerda + vTam) /2;

        if(vetor[meio] > num){

            vTam = meio + 1;
        }
        else if(vetor[meio] < num){

                esquerda = meio;
             }
             else return meio;

    }

    if
    return -1;
}
