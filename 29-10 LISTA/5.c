#include <stdio.h>

int somar (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", somar(n));

    return 0;
}

int somar (int n)
{   if (n == 1)
        return 1;
    else
        return (n + somar(n-1));
}
