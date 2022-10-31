#include <stdio.h>

int count = 0;

void identifica (int n, int k);

int main ()
{   int n, k;

    scanf("%d %d", &n, &k);

    identifica(n, k);

    printf("%d", count);

    return 0;
}

void identifica (int n, int k)
{   if (n != 0)
    {   if (n % 10 == k)
            count++;
        
        identifica(n/10, k);
    }
}
