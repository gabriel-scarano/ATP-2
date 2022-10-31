#include <stdio.h>
#include <stdlib.h>

int somar (int *v, int n);

int main ()
{   int n, *v;

    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d", somar(v, n));

    free(v);

    return 0;
}

int somar (int *v, int n)
{   if (n == 1)
        return *v;
    else
        return (*v + somar(++v, n-1));
}
