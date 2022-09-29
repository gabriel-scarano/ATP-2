#include <stdio.h>

int main ()
{   int N, A, B;
    char res[1001];
    int i, j;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {   scanf("%d %d", &A, &B);

        if ((A + B) % 2 == 0)
            res[i] = 'A';
        else
            res[i] = 'B';
    }

    for (j = 0; j < i; j++)
        printf("%c\n", res[j]);

    return 0;
}