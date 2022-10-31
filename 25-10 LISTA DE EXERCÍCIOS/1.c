#include <stdio.h>
#include <stdlib.h>

int count = 0;

int procura (int *v, int *size, int *p);

int main ()
{   int n, *v, p, ind;

    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &p);

    if ((ind = procura(v, &n, &p)) == -1)
        printf("\nNumero nao encontrado.");
    else
        printf("\nNumero encontrado na posicao %d", ind);

    free(v);

    return 0;
}

int procura (int *v, int *size, int *p)
{   if (*size == 0)
        return -1;
    else if (*v == *p)
        return count;
    else
    {   v++;
        *size--;
        count++;
        procura (v, size, p);
    }
}