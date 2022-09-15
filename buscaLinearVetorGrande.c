#include <stdio.h>

int main(){

    int buscaLinear(int num, int *vetor, int vTam);
    int v[500000]; //Ao adicionar mais um zero, o programa nem roda.
    int vTam = 500000;
    int num;

    for(int i = 0; i < 500000; i++){

        v[i] = i * 2;
    }

    printf("Qual numero voce deseja procurar?\n");
    scanf("%i", &num);

    printf("%i", buscaLinear(3, v, vTam));

    return 0;
}

int buscaLinear(int num, int *vetor, int vTam){

    for(int i = 0; i < vTam; i++){

        if(num == vetor[i]) return i;
    }

    return -1;
}
