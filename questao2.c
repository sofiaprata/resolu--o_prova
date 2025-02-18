//2 questão: Crie uma função pra retornar a maior soma (x+y) presente nos pontos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

typedef struct{
    int x;
    int y;
    int soma;
}pontos;

int main(){
    srand(time(NULL));


    int qnt_pontos;

    printf("Digite a quantidade de pontos:\n");
    scanf("%d", &qnt_pontos);

    pontos *p = (pontos *)malloc(qnt_pontos * sizeof(pontos));

    if(p == NULL){
        printf("Erro na alocacao.\n");
        exit(1);
    }

    for (int i =0 ; i < qnt_pontos; i++){
        p[i].x = rand() % MX;
        p[i].y = rand() % MX;
        p[i].soma = p[i].x + p[i].y;
    }

    printf("Valores gerados:\n");
    for(int i = 0; i<qnt_pontos; i++){
        printf("Valor %d -> x : %d  y : %d \n", i, p[i].x, p[i].y);
    }
    printf("Soma dos valores:\n");
    for(int i = 0; i < qnt_pontos; i++){
        printf("Soma %d : %d\n", i, p[i].soma);
    }

    free(p);
    return 0;
}
