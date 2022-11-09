#include <stdio.h>
#include <stdlib.h>

int count = 0, *p1, *p2, *p3, n;
int quant[3] = { 0 };

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade, int max);
void imprime();


int main ()
{   int k, i, achou;

    scanf("%d %d", &n, &k);
    quant[0] = n;

    p1 = malloc(n * sizeof(int));
    p2 = malloc(n * sizeof(int));
    p3 = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {   p1[i] = 1;
        p2[i] = p3[i] = 0;
    }

    TorreHanoi(0, 2, 1, n, k);
            
    imprime();

    free(p1);
    free(p2);
    free(p3);

    return 0;
}

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade, int max){
  int *pino_origem, *pino_destino, i;

  if (count < max)
  {
    if( quantidade == 1 ){
        quant[origem]--;
        quant[destino]++;

        switch (origem)
        {   case 0:
                pino_origem = p1; break;

            case 1:
                pino_origem = p2; break;

            case 2:
                pino_origem = p3; break;
        }

        switch (destino)
        {   case 0:
                pino_destino = p1; break;

            case 1:
                pino_destino = p2; break;

            case 2:
                pino_destino = p3; break;
        }
        i = 0;

        while(!pino_origem[i])
            i++;

        pino_origem[i] = 0;
        pino_destino[i] = 1;

        count+=1;
    }else{
        TorreHanoi(origem, auxiliar, destino, quantidade-1, max);
        TorreHanoi(origem, destino, auxiliar, 1, max);
        TorreHanoi(auxiliar, destino, origem, quantidade-1, max);
    }
  }
}

void imprime()
{   int achou, i;
    
    achou = 0;    
    for (i = 0; i < n; i++)
    {   if (p1[i] == 1)
        {   printf("%d ", i + 1);
            achou = 1;
        }
        else if (i == n-1 && p1[i] == 0 && !achou)
            printf("0");
    }
    
    printf("\n");
    achou = 0;
    for (i = 0; i < n; i++)
    {   if (p2[i] == 1)
        {   printf("%d ", i + 1);
            achou = 1;
        }
        else if (i == n-1 && p2[i] == 0 && !achou)
            printf("0");
    }

    printf("\n");
    achou = 0;    
    for (i = 0; i < n; i++)
    {   if (p3[i] == 1)
        {   printf("%d ", i + 1);
            achou = 1;
        }
        else if (i == n-1 && p3[i] == 0 && !achou)
            printf("0");
    }
}