#include <stdio.h>

void imprime (int n);

int main ()
{   int n;

    scanf("%d", &n);

    imprime(n);

    return 0;
}

void imprime (int n)
{   if (n % 2 == 1)
        n--;
    
    if (n >= 0)
    {   printf("%d ", n);
        imprime(n-2);
    }    
}
