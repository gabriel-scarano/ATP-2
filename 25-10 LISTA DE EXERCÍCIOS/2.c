#include <stdio.h>
#include <stdlib.h>

double pot (int x, int n);

int main ()
{   int x, n;

    scanf("%d %d", &x, &n);

    printf("%lf", pot(x, n));

    return 0;
}

double pot (int x, int n)
{   if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n == -1)
        return (float)1/x;
    else if (n > 1)
        return (x * pot(x, --n));
    else
    {    n *= -1;
        return 1/(x * pot(x, --n));
    }
}
