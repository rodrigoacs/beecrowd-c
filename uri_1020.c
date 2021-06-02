#include <stdio.h>

int main()
{
    int N, d, m, m2, y, y2;
    scanf("%d", &N);
    y = N / 365;
    y2 = N % 365;
    m = y2 / 30;
    m2 = y2 % 30;
    d = m2;
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
