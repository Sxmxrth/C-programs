#include <stdio.h>
#include <math.h>
int amicable();
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter number 1= ");
    scanf("%d", &a);
    printf("enter number 2= ");
    scanf("%d", &b);
    int x = amicable(a, b);
    if (x == 0)
    {
        printf("FALSE");
    }
    else if (x == 1)
    {
        printf("TRUE");
    }
    return 0;
}

int amicable(int a, int b)
{
    int s1 = 1, s2 = 1, m, n;
    int c = (int)sqrt(a);
    int d = (int)sqrt(b);
    for (int i = 2; i <= c; i++)
    {
        if (a % i == 0)
        {
            m = a / i;
            if (m == i)
            {
                s1 = s1 + i;
            }
            else
            {
                s1 = s1 + i + m;
            }
        }
    }

    for (int j = 2; j <= d; j++)
    {

        if (b % j == 0)
        {
            n = b / j;
            if (n == j)
            {
                s2 = s2 + j;
            }
            else
            {
                s2 = s2 + j + n;
            }
        }
    }

    if (s1 == b && s2 == a)
    {
        return 1;
    }
    return 0;
}