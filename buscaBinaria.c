#include <stdio.h>

int main(){

    int buscaBinaria(int num, int *vetor, int vTam);
    int v[500000]; //Ao adicionar mais um zero, o programa nem roda.
    int vTam = 500000;
    int num;

    for(int i = 0; i < 500000; i++){

        v[i] = i * 2;
    }

    printf("Qual numero voce deseja procurar?\n");
    scanf("%i", &num);

    printf("%i", buscaBinaria(num, v, vTam));

    return 0;
}

int buscaBinaria(int num, int *vetor, int vTam){

    int esquerda = 0;
    int meio = (esquerda + vTam) /2;

    while(esquerda < vTam){
    printf("iteração\n");
        if(vetor[meio] > num){

            vTam = meio;
            meio = (esquerda + vTam) /2;
        }
        else if(vetor[meio] < num){

                esquerda = meio;
                meio = (esquerda + vTam) /2;
             }
             else return meio;

    }

    return -1;
}
