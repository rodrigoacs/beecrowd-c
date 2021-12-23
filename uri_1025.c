#include <stdio.h>

void insercao(int *v, int n)
{
    int i, j;
    int aux;
    for (i = 1; i < n; i++)
    {
        aux = v[i];
        j = i - 1;
        while ((j >= 0) && (aux < v[j]))
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

int main()
{
    int marmoresQtde, consultasQtde, caso = 1, achou = 0;
    while (1)
    {
        scanf("%d %d", &marmoresQtde, &consultasQtde);
        if (marmoresQtde == 0 && consultasQtde == 0)
        {
            break;
        }

        printf("CASE# %d:\n", caso);

        int marmores[marmoresQtde], consultas[consultasQtde];

        for (int i = 0; i < marmoresQtde; i++)
        {
            scanf("%d", &marmores[i]);
        }

        for (int i = 0; i < consultasQtde; i++)
        {
            scanf("%d", &consultas[i]);
        }

        insercao(marmores, marmoresQtde);

        for (int i = 0; i < consultasQtde; i++)
        {
            for (int j = 0; j < marmoresQtde; j++)
            {
                if (consultas[i] == marmores[j])
                {
                    printf("%d found at %d\n", consultas[i], j + 1);
                    achou++;
                    break;
                }
            }
            if (achou == 0)
            {
                printf("%d not found\n", consultas[i]);
            }
            achou = 0;
        }

        caso++;
    }

    return 0;
}
