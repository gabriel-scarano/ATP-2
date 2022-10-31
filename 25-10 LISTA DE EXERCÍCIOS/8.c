#include <stdio.h>

int calc_dig (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", calc_dig(n));

    return 0;
}

int calc_dig (int n)
{   if (n == 0)
        return 0;
    else
        return (n%10 + calc_dig(n/10));
}
