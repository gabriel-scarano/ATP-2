#include <stdio.h>
#include <stdlib.h>
#define MAX 10000001

int main ()
{   int n, k, x, y, v[5][5] = {{1, 16, 15, 14, 13}, {2, 17, 24, 23, 12}, {3, 18, 25, 22, 11}, {4, 19, 20, 21, 10}, {5, 6, 7, 8, 9} }, i, j, menor;

    scanf("%d", &n);

    scanf("%d", &k);
    scanf("%d %d", &x, &y);
    printf("\n");

    menor = v[x-k][y-k];
    for (i = x - k; i < x+k && i < n; i++)
        for (j = y - k; j < y+k && j < n; j++)
            if (v[i][j] < menor)
                menor = v[i][j];

    printf("Resposta: %d", menor);

    return 0;
}
