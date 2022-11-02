#include <stdio.h>

int pell (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", pell(n));

    return 0;
}

int pell (int n)
{   if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2 * pell(n-1) + pell(n-2);
}
