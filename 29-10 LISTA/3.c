#include <stdio.h>

int inverte (int n);

int main ()
{   int n;

    scanf("%d", &n);

    inverte(n);

    return 0;
}

int inverte (int n)
{   if (n != 0)
    {   printf("%d", n % 10);
        inverte(n/10);
    }
}
