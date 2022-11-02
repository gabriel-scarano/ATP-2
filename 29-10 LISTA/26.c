#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * fibonacci (char *f, int n);

int main ()
{   int n;
    char *f;

    scanf("%d", &n);

    f = malloc(n * sizeof(char));
    fibonacci(f, n);
    printf("%s", f);

    free(f);    

    return 0;
}

char * fibonacci (char *f, int n)
{   
    if (n == 0)
        return (char *)98;
    else if (n == 1)
        return (char *)97;
    else
    {   return strcat(f, fibonacci(f, n-1));
        return strcat(f, fibonacci(f, n-2));
    }
        
}
