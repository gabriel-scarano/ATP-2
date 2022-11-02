#include <stdio.h>
#include <stdlib.h>

void retorna (int *v, int n);

int menor;

int main ()
{   int n, *v, i;

    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    menor = v[0];
    retorna(v, n);

    printf("%d", menor);

    return 0;
}

void retorna (int *v, int n)
{   if (n >= 1)
    {   if (*v < menor)
            menor = *v;
        
        retorna(++v, n-1);
    }
}
