#include <stdio.h>

int soma (int n);

int main ()
{   int n;

    scanf("%d", &n);
    printf("%d", soma(n));

    return 0;
}

int soma (int n)
{   if (n == 1)
        return 1;
    else
        return (n + soma(n-1));
}
