#include <stdio.h>
#include <locale.h>

int main ()
{   FILE *codigo, *palavras, *linhas;
    int N, i, count;
    char P[1000], c;

    setlocale(LC_ALL, "Portuguese");

    // Condicionais para verificar se os arquivos necesários para a execução do algoritmo já existem.
    if ((codigo = fopen("codigos.dat", "r")) == NULL)
    {   printf("Arquivo codigos.dat não encontrado.");
        return 1;
    }

    if ((palavras = fopen("palavras.dat", "r")) == NULL)
    {   printf("Arquivo palavras.dat não encontrado.");
        return 1;
    }

    // Cria o arquivo linhas.dat para registrar os resultados.
    linhas = fopen("linhas.dat", "w");


    // Executa o laço while até que o arquivo codigos.dat ou o arquivo palavras.dat cheguem ao fim.
    while (!feof(codigo) && !feof(palavras))
    {   // pega um número do arquivo codigos.dat.
        fscanf(codigo, "%d", &N);
        
        if (N > 0)
        {   // caso o número (N) for maior que 0, ele roda o laço 'for' N vezes para pegar N palavras do arquivo de palavras e registrar elas no arquivo linhas.dat .
            for (i = 0; i < N; i++)
            {   fscanf(palavras, "%s", P);
                fprintf(linhas, "%s ", P);
            }
            fprintf(linhas, "\n");
        } else if (N == 0)
        {   // caso o número (N) for igual a 0, ele cria uma linha com o número 0.
            fprintf(linhas, "0\n");
        } else
        {   // caso o número (N) for menor que 0, ele volta N palavras a partir da posição atual do ponteiro do arquivo palavras.dat e registra elas no arquvio linhas.dat .
            count = 1;

            // criamos esse laço while para voltar o ponteiro do arquivo de palavras até que ele passe por N caracteres ' ', que representam a divisão entre as palavras do arquivo. 
            while(count <= N * (-1))
            {   // executamos o comando para voltar 1 caractere a partir da posição atual do ponteiro do arquivo
                fseek(palavras, -1, SEEK_CUR);
                // pega o caractere atual do ponteiro do arquivo palavras.dat
                c = fgetc(palavras);

                // se o caractere for igual a ' ', a variável count é incrementada 
                if (c == ' ')
                    count++;

                /*  executamos novamente o comando para voltar o ponteiro 1 caractere, 
                    pois quando executamos o comando fgetc para pegar o caractere atual que o ponteiro está apontando, 
                    o ponteiro automaticamente anda 1 posição pra frente após a execução do comando, 
                    então para o próximo caractere a ser lido não ser o mesmo ' ' que foi lido anteriormente, voltamos mais uma posição */
                fseek(palavras, -1, SEEK_CUR);                
            }

            // Após voltar N palavras, registramos elas em uma nova linha no arquivo linhas.dat
            for (i = 0; i < N * (-1); i++)
            {   fscanf(palavras, "%s", P);
                fprintf(linhas, "%s ", P);
            }
            fprintf(linhas, "\n");
        }

    }

    /* Caso o while anterior ter sido finalizado pelo arquivo de palavras.dat ter terminado,
       registramos os códigos que não foram lidos em uma nova linha no arquivo linhas.dat */
    while(!feof(codigo))
    {   fscanf(codigo, "%d", &N);
        fprintf(linhas, "%d ", N);
    }

    /* Caso o while anterior ter sido finalizado pelo arquivo de codigos.dat ter terminado,
       registramos as palavras que não foram lidas em novas linhas no arquivo linhas.dat */
    count = 0;
    while(!feof(palavras))
    {   fscanf(palavras, "%s", P);
        fprintf(linhas, "%s ", P);
        count++;

        // como queremos que as palavras que restaram sejam exibidas como no máximo 5 palavras por linha, fazemos o controle utilizando uma variável auxiliar.
        if (count % 5 == 0)
            fprintf(linhas, "\n");
    }

    fclose(codigo);
    fclose(palavras);
    fclose(linhas);


    printf("Arquivo linhas.dat criado com sucesso!");

    return 0;
}