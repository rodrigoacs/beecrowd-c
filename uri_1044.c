#include <stdio.h>

int main()
{
    int A, B, r;
    scanf("%d %d", &A, &B);
    if (A > B)
    {
        r = A % B;
        if (r != 0)
        {
            printf("Nao sao Multiplos\n");
        }
        else
        {
            printf("Sao Multiplos\n");
        }
    }
    else
    {
        r = B % A;
        if (r != 0)
        {
            printf("Nao sao Multiplos\n");
        }
        else
        {
            printf("Sao Multiplos\n");
        }
    }

    return 0;
}
