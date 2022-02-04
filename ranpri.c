#include <stdio.h>
#include <math.h>
int prime();
int main(int argc, char const *argv[])
{
    int a, b, x;
    printf("enter lower limit=");
    scanf("%d", &a);
    printf("enter upper limit=");
    scanf("%d", &b);
    for (int i = a + 1; i <= b; i++)
    {
        x = prime(i);
        if (x == 1)
        {
            printf("%d* ", i);
        }
        else
        {
            printf("%d ", i);
        }
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
int prime(int i)
{
    int c = (int)sqrt(i);
    for (int j = 2; j <= c; j++)
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}
