#include <stdio.h>

int n1, n2;

int mult (int x, int y);

int main ()
{   scanf("%d %d", &n1, &n2);

    printf("%d", mult(n1, n2));

    return 0;
}

int mult (int x, int y)
{   if (y == 1)
        return x;
    else
        return (x + mult(x, y-1));
}
