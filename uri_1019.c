#include <stdio.h>

int main()
{
    int N, h, h2, m, m2, s, s2;
    scanf("%d", &N);
    s2 = N / 60;
    s = N % 60;
    m2 = s2 / 60;
    m = s2 % 60;
    h2 = m2 / 60;
    h = m2 % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
