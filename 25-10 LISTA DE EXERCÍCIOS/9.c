#include <stdio.h>
#include <string.h>

void ler_string (char *S, int len);

int main ()
{   char S[1000];
    int len;

    scanf("%[^\n]s", S);

    len = strlen(S);

    ler_string(S, len);

    return 0;
}

void ler_string (char *S, int len)
{   int i;

    for (i = len-1; i >= 0; i--)
        printf("%c", S[i]);
}