#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define p 10000

typedef struct Planeta {
    double x, y, z;
    char nome[21];
    double peso;
} planeta;

struct resp {
    int tipo;
    int ind;
    double dist;
} respostas[p];

int main () 
{
    int i, j, N, M, op, i_p1, i_p2, count = 0;
    char p1[21], p2[21];
    planeta planetas[p];

    scanf("%d %d", &N, &M);


    for (i=0; i<N; i++) 
    {
        scanf("%s %lf %lf %lf %lf", planetas[i].nome, &planetas[i].peso, &planetas[i].x, &planetas[i].y, &planetas[i].z);
        planetas[i].peso = floor(planetas[i].peso*100)/100;
    }

    for (i=0; i<M; i++)
    {
        scanf(" %d", &op);
        if (op == 1)
        {
            respostas[i].tipo = 1;
            scanf(" %s", p1);
            scanf(" %s", p2);
            for (j = 0; j<N; j++)
            {
                if (strcmp(planetas[j].nome, p1) == 0)
                    i_p1 = j;
                else if (strcmp(planetas[j].nome, p2) == 0)
                    i_p2 = j;
            }
            respostas[i].dist = sqrt((planetas[i_p2].x - planetas[i_p1].x)*(planetas[i_p2].x - planetas[i_p1].x) + (planetas[i_p2].y - planetas[i_p1].y)*(planetas[i_p2].y - planetas[i_p1].y) + (planetas[i_p2].z - planetas[i_p1].z)*(planetas[i_p2].z - planetas[i_p1].z));
            respostas[i].dist = floor(respostas[i].dist*100)/100;
        }
        else if (op == 2)
        {
            respostas[i].tipo = 2;
            scanf(" %s", p1);
            for (j = 0; j<N; j++)
            {
                if (strcmp(planetas[j].nome, p1) == 0)
                    i_p1 = j;
            }
            respostas[i].ind = i_p1;
        }
        else
        {
            respostas[i].tipo = 3;
            scanf(" %s", p1);
            for (j = 0; j<N; j++)
            {
                if (strcmp(planetas[j].nome, p1) == 0)
                    i_p1 = j;
            }
            respostas[i].ind = i_p1;
        }
    }


    for (i=0; i<M; i++)
    {
        if (respostas[i].tipo == 1)
            printf("%.2Lf\n", respostas[i].dist);
        else if (respostas[i].tipo == 2)
            printf("%d %d %d\n", (int)planetas[respostas[i].ind].x, (int)planetas[respostas[i].ind].y, (int)planetas[respostas[i].ind].z);
        else
            printf("%.2f\n", planetas[respostas[i].ind].peso);
    }


    return 1;
}