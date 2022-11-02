#include <stdio.h>

int catalan (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", catalan(n));

    return 0;
}

int catalan (int n)
{   if (n == 0)
        return 1;
    else
        return ((float)((4 * n - 2)* catalan(n-1))/(float)(n+1));
}
