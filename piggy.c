#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, e, t;
    printf("enter number of 50 paise coins=\n ");
    scanf("%d", &a);
    printf("enter number of 25 paise coins=\n ");
    scanf("%d", &b);
    printf("enter number of 20 paise coins=\n ");
    scanf("%d", &c);
    printf("enter number of 10 paise coins= \n");
    scanf("%d", &d);
    printf("enter number of 5 paise coins= \n");
    scanf("%d", &e);
    t = (a * 50) + (b * 25) + (c * 20) + (d * 10) + (e * 5);
    printf("the total amount of money you have is= %d", t);
    return 0;
}
