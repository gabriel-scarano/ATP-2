#include <stdio.h>

int padovan (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", padovan(n));

    return 0;
}

int padovan (int n)
{   if (n == 0 || n == 1 || n == 2)
        return 1;
    else
        return padovan(n-2) + padovan(n-3);

}
