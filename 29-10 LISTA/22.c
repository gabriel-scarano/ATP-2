#include <stdio.h>

int tetranacci(int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", tetranacci(n));

    return 0;
}

int tetranacci(int n)
{   if (n == 0 || n == 1 || n == 2)
        return 0;
    else if (n == 3)
        return 1;
    else
        return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}
