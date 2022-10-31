#include <stdio.h>

void converte_binario(int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d em binario: ", n);
    converte_binario(n);

    return 0;
}

void converte_binario(int n)
{   int r, q;

    r = n % 2;

    if ((q = n/2) >= 1)
        converte_binario(q);

    printf("%d", r);

}
