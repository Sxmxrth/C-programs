#include <stdio.h>
#include <math.h>
int relprime();
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter number 1= ");
    scanf("%d", &a);
    printf("enter number 2= ");
    scanf("%d", &b);
    int x = relprime(a, b);
    if (x == 1)
    {
        printf("Relatively prime");
    }
    else if (x == 0)
    {
        printf("nope");
    }
    return 0;
}

int relprime(int a, int b)
{
    int s1 = 0, s2 = 0;
    int c = (int)sqrt(a);

    for (int i = 2; i <= c; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                return 0;
            }
        }
    }

    return 1;
}
