#include <stdio.h>

double sequencia (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%lf", sequencia(n));

    return 0;
}

double sequencia (int n)
{   if (n == 1)
        return 1;
    else
        return ((float)1/n + sequencia(n-1));
}
