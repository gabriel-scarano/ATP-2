#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verifica_palindromo (char *s, int len);
int palindromo (char *s, int len);

int main ()
{   char S[2001];
    int k;

    scanf("%s", S);

    k = strlen(S);

    printf("%d", verifica_palindromo(S, k));


    return 0;
}

int verifica_palindromo (char *s, int len)
{   char *p;
    int i, j, k, count;

    p = malloc(len * sizeof(char));

    for (i = len; i > 0; i--)
    {   for (j = 0; j < len-i+1; j++)
        {   count = 0;

            for (k = j; k < j+i; k++)
            {
                p[count] = s[k];
                count++;
            }
            p[count] = '\0';

            if(palindromo(p, i))
                return i;
        }
    }

    free(p);

    return 0;
}

int palindromo (char *s, int len)
{   int i;

    for (i = 0; i < len/2; i++)
        if (s[i] != s[len-1-i])
            return 0;

    return 1;
}
