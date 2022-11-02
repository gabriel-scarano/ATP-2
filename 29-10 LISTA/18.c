#include <stdio.h>

int fat (int x);

int n;

int main ()
{   scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
}

int fat (int x)
{
    if (x == 1 || x == 0)
    {   if (n == 1 || n == 0)
            return 1;
        else
        {   n--;
            return (x * fat(n));
        }
    } else
        return (x * fat(x-1));
}
