//3 questão: Crie uma função que retorne a maior distancia entre x,y nos pontos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define INI 0
#define MX 100

typedef struct{
    int x;
    int y;
    int dist;
}pontos;

int main(){
    srand(time(NULL));

    int qnt_pontos;

    printf("Digite a quantidade de pontos:\n");
    scanf("%d", &qnt_pontos);

    pontos *p = (pontos *)malloc(qnt_pontos * sizeof(pontos));

    if(p == NULL){
        printf("Erro na alocação din.\n");
        exit(1);
    }

    for(int i = 0; i < qnt_pontos; i++){
        p[i].x = rand() % MX;
        p[i].y = rand() % MX;
        p[i].dist = abs(p[i].x - p[i].y);
    }

    printf("Valores formados:\n");
    for(int i = 0; i < qnt_pontos; i++){
        printf("Valor %d x -> %d  y -> %d \n", i, p[i].x, p[i].y);
    }
    printf("Valor das distancias:\n");
    for(int i = 0; i<qnt_pontos; i++){
        printf("distancia %d -> %d\n", i, p[i].dist);
    }

    free(p);
    return 0;
}
