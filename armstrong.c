#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, n, s = 0, v = 0;
    printf("enter a number=");
    scanf("%d", &a);
    int c = a;
    int d = a;
    while (d > 0)
    {
        n = a % 10;
        d = d / 10;
        v++;
    }
    while (a > 0)
    {
        n = a % 10;
        s = s + pow(n, v);
        a = a / 10;
    }
    if (s == c)
    {
        printf("the number is an armstrong number");
    }
    else
    {
        printf("not an amstrong number");
    }
    return 0;
}
