#include <stdio.h>
#include <stdlib.h>

int retorna (int *v, int a, int menor, int indice);

int n;

int main ()
{   int *v, i;

    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d", retorna(v, n, v[0], 0));

    return 0;
}

int retorna (int *v, int a, int menor, int indice)
{   if (n >= 1)
    {   if (*v < menor)
            return retorna(++v, n-1, *v, n-a);
        else
            return retorna(++v, n-1, menor, indice);
    }
    else
        return menor;

}
