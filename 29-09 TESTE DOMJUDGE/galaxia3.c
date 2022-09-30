#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct planeta {
    char nome[21];
    double peso;
    double x, y, z;
} Planeta;

int retorna_indice (Planeta *planetas, char *nome, int n);
void op1 (Planeta *planetas, int N);
void op2 (Planeta *planetas, int N);
void op3 (Planeta *planetas, int N);

int main ()
{   int N, M, op;
    int i;
    Planeta *planetas;

    scanf("%d %d", &N, &M);

    planetas = malloc(N * sizeof(Planeta));

    for (i = 0; i < N; i++)
    {
        scanf("%s %lf %lf %lf %lf", planetas[i].nome, &planetas[i].peso, &planetas[i].x, &planetas[i].y, &planetas[i].z);
    }

    for (i = 0; i < M; i++)
    {   scanf("%d", &op);

        switch (op)
        {   case 1: op1(planetas, N); break;
            case 2: op2(planetas, N); break;
            case 3: op3(planetas, N); break;
        }

        if (i != M-1)
            printf("\n");
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
    double dist, res;
    int ind1, ind2;

    scanf("%s %s", nome1, nome2);

    ind1 = retorna_indice(planetas, nome1, N);
    ind2 = retorna_indice(planetas, nome2, N);

    res = ((planetas[ind1].x - planetas[ind2].x) * (planetas[ind1].x - planetas[ind2].x) + (planetas[ind1].y - planetas[ind2].y) * (planetas[ind1].y - planetas[ind2].y) + (planetas[ind1].z - planetas[ind2].z) * (planetas[ind1].z - planetas[ind2].z));
    dist = pow(res, 0.5);
    
    printf("%.2lf", dist);
}

void op2 (Planeta *planetas, int N)
{   char nome[21];
    int ind;

    scanf("%s", nome);

    ind = retorna_indice(planetas, nome, N);

    printf("%.0lf %.0lf %.0lf", planetas[ind].x, planetas[ind].y, planetas[ind].z);    
}

void op3 (Planeta *planetas, int N)
{   char nome[21];
    int ind;

    scanf("%s", nome);

    ind = retorna_indice(planetas, nome, N);

    printf("%.2lf", planetas[ind].peso);    

}

