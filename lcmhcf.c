#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, t = 0, max;
    printf("enter a number=");
    scanf("%d", &a);
    printf("enter another number=");
    scanf("%d", &b);
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    while (1)
    {
        if (max % b == 0 && max % a == 0)
        {
            printf("the lcm is = %d \n", max);
            break;
        }
        else
        {
            max++;
        }
    }
    if (a > b)
    {
        max = b;
    }
    else
    {
        max = a;
    }

    while (max > 0)
    {
        if (a % max == 0 && b % max == 0)
        {
            printf("the hcf is = %d", max);
            break;
        }
        max--;
    }

    return 0;
}
