#include <stdio.h>
#include <math.h>
int prodiv();
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number= ");
    scanf("%d", &n);
    int x = prodiv(n);
    printf("the sum of the proper divisers is= %d", x);
    return 0;
}

int prodiv(int n)
{
    int s = 1, x;
    int c = (int)sqrt(n);
    for (int i = 2; i <= c; i++)
    {
        if (n % i == 0)
        {
            x = n / i;
            if (x == i)
            {
                s = s + x;
            }
            else
            {
                s = s + x + i;
            }
        }
    }
    return s;
}
