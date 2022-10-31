#include <stdio.h>

void imprime (char *s, int comeco, int fim);

int main ()
{   char s[27];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        s[i] = 65 + i;
    
    s[i] = '\0';

    imprime(s, 0, n);

    return 0;
}

void imprime (char *s, int comeco, int fim)
{   char aux;
    int i, j;

    for (i = comeco; i < fim-1; i++)
    {   for (j = i+1; j < fim; j++)
        {   aux = s[i];
            s[i] = s[j];
            s[j] = aux;

            imprime(s, i+1, fim);
            
            aux = s[i];
            s[i] = s[j];
            s[j] = aux;
        }
    }

    printf("%s\n", s);

}