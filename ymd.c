#include <stdio.h>
int main()
{
    int a;
    printf("enter number of days= ");
    scanf("%d", &a);
    int y = a / 365;
    printf("the number of years is= %d \n", y);
    int l = a - (365 * y);
    int m = l / 30;
    printf("the number of months is= %d \n", m);
    int d = l - (m * 30);
    printf("the number of days is= %d \n", d);
    return 0;
}
