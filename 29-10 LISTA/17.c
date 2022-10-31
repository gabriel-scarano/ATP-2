#include <stdio.h>

int n;

int fat (int a);

int main ()
{   scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
}

int fat (int a)
{   if (a == 0)
        return 1;
    else if (a == n+1)
        return a;
    else if (a == n)
        return fat(a*2);
    else
        return (a * fat(a-1));
}
