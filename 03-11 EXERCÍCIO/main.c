#include <stdio.h>
#include <string.h>

int compara (char *S, char *A);

int main ()
{   char S[200], A[200];

    scanf(" %s", S);
    scanf(" %s", A);

    printf("%d", compara(S, A));

    return 0;
}

int compara (char *S, char *A)
{   int count = 0;
    char *P;

    do
    {   P = strstr(S, A);
        
        if (P != NULL)
        {   count++;
            S = P+1;
        }
    } while (P != NULL);

    return count;
}
