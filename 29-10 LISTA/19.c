#include <stdio.h>

int fat (int n);

int main ()
{   int n;

    scanf("%d", &n);

    printf("%d", fat(n));

    return 0;
}

int fat (int n)
{   int exp = 1, i;
    
    if (n == 1)
        return 1;
    else
    {   for (i = 1; i <= n; i++)
            exp *= n;

        return (exp * fat(n-1));
    }

}
