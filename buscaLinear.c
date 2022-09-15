#include <stdio.h>

int main(){

    int buscaLinear(int num, int *vetor, int vTam);
    int v[] = {1,3,5,7,9};
    int vTam = 5;
    int num;

    printf("Qual numero voce deseja procurar?\n");
    scanf("%i", &num);

    printf("%i", buscaLinear(num, v, vTam));




    return 0;
}

int buscaLinear(int num, int *vetor, int vTam){

    for(int i = 0; i < vTam; i++){

        if(num == vetor[i]) return i;
    }

    return -1;
}
