#include <stdio.h>

int pot (int k, int n);

int main ()
{   int k, n;

    scanf("%d %d", &k, &n);

    printf("%d", pot(k, n));

    return 0;
}

int pot (int k, int n)
{   if (n == 0)
        return 1;
    else
        return (k * pot(k, n-1));
}
