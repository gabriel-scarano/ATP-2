#include <stdio.h>

void binario (int n);

int main ()
{   int n;

    scanf("%d", &n);

    binario(n);

    return 0;
}

void binario (int n)
{   int b;
    
    if ((n/2) > 0)
    {   b = n%2;
        binario((n/2));
        printf("%d", b);
    } else if (n == 1)
        printf("1");
    else
        printf("0");

}