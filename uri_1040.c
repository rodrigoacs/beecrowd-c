#include <stdio.h>

int main()
{
    double N1, N2, N3, N4, NE, m;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    m = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
    printf("Media: %.1lf\n", m);

    if (m >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (m < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if ((m >= 5.0) && (m <= 6.9))
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &NE);
        printf("Nota do exame: %.1lf\n", NE);
        m = (m + NE) / 2;

        if (m >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }

        if (m <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", m);
    }

    return 0;
}
