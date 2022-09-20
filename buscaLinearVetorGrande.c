#include <stdio.h>

int main(){

    int buscaLinear(int num, int *vetor, int vTam);
    int v[5000]; //Ao adicionar mais um zero, o programa nem roda.
    int vTam = 5000;
    int num;

    for(int i = 0; i < 5000; i++){

        v[i] = i * 2;
    }

    printf("Qual numero voce deseja procurar?\n");
    scanf("%i", &num);

    printf("%i", buscaLinear(num, v, vTam));

    return 0;
}

int buscaLinear(int num, int *vetor, int vTam){

    for(int i = 0; i < vTam; i++){

        printf("iteração %i\n", i+1);

        if(num == vetor[i+1]) return i;
    }

    return -1;
}
