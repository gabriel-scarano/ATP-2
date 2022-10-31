#include <stdio.h>
#include <stdlib.h>

void imprime (int n);

int main ()
{   int n;
    scanf("%d", &n);

    imprime(n-1);

    return 0;
}

void imprime (int n)
{   int a;
    scanf("%d", &a);

    if (n > 0)
        imprime(n-1);
    
    printf("%d ", a);
}