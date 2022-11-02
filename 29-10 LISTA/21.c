#include <stdio.h>

int tribonacci(int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", tribonacci(n));

    return 0;
}

int tribonacci(int n)
{   if (n == 1 || n == 0)
        return 0;
    else if (n == 2)
        return 1;
    else
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}
