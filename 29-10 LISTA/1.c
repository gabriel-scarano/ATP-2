#include <stdio.h>

int fatorial (int n);

int main ()
{   int n;

    scanf("%d", &n);
    printf("%d", fatorial(n));

    return 0;
}

int fatorial (int n)
{   if (n == 1 || n == 0)
        return 1;
    else
        return (n * fatorial(n-1));
}