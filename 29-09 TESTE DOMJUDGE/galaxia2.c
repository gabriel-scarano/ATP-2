#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct planeta {
    char nome[21];
    double peso;
    int x, y, z;
} Planeta;

typedef struct tipoOp {
    char tipo;
    int ind;
    float dist;
} Tipo;

Tipo tipos[100000];
int count = 0;

int retorna_indice (Planeta *planetas, char *nome, int n);
void op1 (Planeta *planetas, int N);
void op2 (Planeta *planetas, int N);
void op3 (Planeta *planetas, int N);

int main ()
{   int N, M, op;
    int i;
    Planeta *planetas;

    planetas = malloc(100000 * sizeof(Planeta));

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++)
    {
        scanf("%s %lf %d %d %d", planetas[i].nome, &planetas[i].peso, &planetas[i].x, &planetas[i].y, &planetas[i].z);   
        planetas[i].peso = floor(planetas[i].peso * 100)/100;
    }

    for (i = 0; i < M; i++)
    {   scanf("%d", &op);

        switch (op)
        {   case 1: op1(planetas, N); break;
            case 2: op2(planetas, N); break;
            case 3: op3(planetas, N); break;
        }

        //if (i != M-1)
          //  printf("\n");
    }

    for (i = 0; i < count; i++)
    {   if (tipos[i].tipo == 1)
        {   printf("%.2f\n", tipos[i].dist);

        } else if (tipos[i].tipo == 2)
        {   printf("%d %d %d\n", planetas[tipos[i].ind].x, planetas[tipos[i].ind].y, planetas[tipos[i].ind].z);

        } else if (tipos[i].tipo == 3)
        {   printf("%.2f\n", planetas[tipos[i].ind].peso);

        }

    }

    return 0;
}

int retorna_indice (Planeta *planetas, char *nome, int n)
{   int i;
    
    for (i = 0; i < n; i++)
        if (strcmp(planetas[i].nome, nome) == 0)
            return i;

    return -1;
}

void op1 (Planeta *planetas, int N)
{   char nome1[21], nome2[21];
    float dist;
    int ind1, ind2;

    scanf("%s %s", nome1, nome2);

    ind1 = retorna_indice(planetas, nome1, N);
    ind2 = retorna_indice(planetas, nome2, N);

    dist = sqrt(pow(planetas[ind1].x - planetas[ind2].x, 2) + pow(planetas[ind1].y - planetas[ind2].y, 2) + pow(planetas[ind1].z - planetas[ind2].z, 2));
    
    tipos[count].tipo = 1;
    tipos[count].dist = dist;
    count++;

    //printf("%.2f", dist);
}

void op2 (Planeta *planetas, int N)
{   char nome[21];
    int ind;

    scanf("%s", nome);

    ind = retorna_indice(planetas, nome, N);

    tipos[count].tipo = 2;
    tipos[count].ind = ind;
    count++;

    //printf("%d %d %d", planetas[ind].x, planetas[ind].y, planetas[ind].z);    
}

void op3 (Planeta *planetas, int N)
{   char nome[21];
    int ind;

    scanf("%s", nome);

    ind = retorna_indice(planetas, nome, N);

    tipos[count].tipo = 3;
    tipos[count].ind = ind;
    count++;

    //printf("%.2f", planetas[ind].peso);    

}
