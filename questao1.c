//Crie um conjuntos de pontos(x,y) que recebe valores pseudoaleatorios, o numero de pontos deve ser definido em tempo de execução
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define MX 100

typedef struct{
    int x;
    int y;
}pontos;

int main(){
    srand(time(NULL));

    int qnt_pontos;

    printf("Digite a quantidade de pontos:\n");
    scanf("%d", &qnt_pontos);

    pontos *p = (pontos *)malloc(qnt_pontos *sizeof(pontos));

    if(p == NULL){
        printf("Memória insuficiente.\n");
        exit(1);
    }

    printf("Digite a quantidade de pontos:\n");
    scanf("%d", &qnt_pontos);

    for(int i=0; i<qnt_pontos; i++){
        p[i].x = rand() % MX;
        p[i].y = rand() % MX;
    }

    printf("Valores dos pontos:\n");

    for(int i =0; i < qnt_pontos; i++){
        printf("Pontos %d x -> %d, y -> %d \n", i + 1, p[i].x, p[i].y);
    }

    free(p);

    return 0;
}

