#include <stdio.h>

int a = 0;

void fat (int n);

int main ()
{   int n;

    scanf("%d", &n);

    a = n;

    fat(a);
    printf("%d", a);

    return 0;
}

void fat (int n)
{   int i;
    if (n > 1)
    {   for (i = 0; i < n-1; i++)
            a *= a;

        fat (n-1);
    }

}
