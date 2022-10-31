#include <stdio.h>
#define MAX 100

void inverte (int *v, int size);

int main ()
{   int v[MAX];

    for (int i = 0; i < MAX; i++)
        scanf("%d", &v[i]);

    inverte(v, MAX);

    return 0;
}

void inverte (int *v, int size)
{   if (size != 1)
        inverte(v, size-1);

    printf("%d ", v[MAX-size]);

}
