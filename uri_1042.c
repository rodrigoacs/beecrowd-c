#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c) && (b > c))
    {
        printf("%d\n%d\n%d\n", c, b, a);
    }
    if ((a > c) && (a > b) && (c > b))
    {
        printf("%d\n%d\n%d\n", b, c, a);
    }
    if ((b > c) && (b > a) && (a > c))
    {
        printf("%d\n%d\n%d\n", c, a, b);
    }
    if ((b > c) && (b > a) && (c > a))
    {
        printf("%d\n%d\n%d\n", a, c, b);
    }
    if ((c > a) && (c > b) && (a > b))
    {
        printf("%d\n%d\n%d\n", b, a, c);
    }
    if ((c > b) && (c > a) && (b > a))
    {
        printf("%d\n%d\n%d\n", a, b, c);
    }
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
