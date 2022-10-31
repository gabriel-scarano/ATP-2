#include <stdio.h>

int mdc (int a, int b);

int main ()
{   int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", mdc(x, y));

    return 0;
}

int mdc (int a, int b)
{   if (a % b == 0)
        return b;
    else
        return mdc(b, a % b);
}
