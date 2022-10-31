#include <stdio.h>

int fat_dup (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", fat_dup(n));

    return 0;
}

int fat_dup (int n)
{   if (n == 1)
        return 1;
    else
        return (n * fat_dup(n-2));
}
