#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10001

int encontra_ultima_abertura (char *s, int n);
int vet_ok (char *s, int n);

int main ()
{   char *S, *R, opcao, fecha, resp = 'S';
    int C, i, j = 0, ind;

    S = malloc(10001 * sizeof(char));
    R = malloc(10001 * sizeof(char));

    scanf("%s", S);
    C = strlen(S);

    for (i = 0; i < C; i++)
    {   if (S[i] == '{' || S[i] == '}' || S[i] == '[' || S[i] == ']' || S[i] == '(' || S[i] == ')')
        {   R[j] = S[i];
            j++;
        }
    }

    free(S);

    while (!vet_ok(R, j) && resp == 'S')
    {   ind = encontra_ultima_abertura(R, j);
        opcao = R[ind];

        i = 1;
        while (R[ind+i] == '0')
        {   i++;
        }

        switch (R[ind])
        {   case '{':
                fecha = '}';
                break;

            case '[':
                fecha = ']';
                break;

            case '(':
                fecha = ')';
                break;
        }

        if (R[ind+i] == fecha)
        {   R[ind] = '0';
            R[ind+i] = '0';
        } else {
            resp = 'N';
        }
    }
    free(R);

    printf("%c", resp);
}

int encontra_ultima_abertura (char *s, int n)
{   int ind, i;

    for (i = 0; i < n; i++)
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                ind = i;
    
    return ind;
}

int vet_ok (char *s, int n)
{   int i;

    for (i = 0; i < n; i++)
        if (s[i] != '0')
            return 0;

    return 1;
}