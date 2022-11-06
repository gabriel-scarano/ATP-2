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
{   char *P;

    P = strstr(S, A);
        
    if (P != NULL)
        return 1 + compara(P+1, A);
    else
        return 0;
}
