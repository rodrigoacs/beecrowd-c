#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[32], es_ci;

    while (1)
    {
        scanf(" %s", &nome);
        if (strcmp(nome, "fim") == 0)
            break;

        scanf(" %c", &es_ci);
        switch (es_ci)
        {
        case 'C':
            printf("%s Casado\n", nome);
            break;
        case 'S':
            printf("Solteiro\n");
            break;
        case 'V':
            printf("Viuvo\n");
            break;
        case 'D':
            printf("Divorciado\n");
            break;
        case 'O':
            printf("Outro\n");
            break;
        }
    }
    printf(" %s %c", nome, es_ci);
    return 0;
}
