#include <stdio.h>

int quant_bolas (int n);

int main ()
{   int camadas;

    scanf("%d", &camadas);

    printf("%d", quant_bolas(camadas));
    
    return 0;
}

int quant_bolas (int n)
{   if (n == 0)
        return 0;
    else
        return (n*n + quant_bolas(n-1));
}