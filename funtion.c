#include <stdio.h>
int sum();
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter number 1=");
    scanf("%d", &a);
    printf("enter number 2= ");
    scanf("%d", &b);
    //
    int c = sum(a, b);
    printf("the sum is= %d", c);
    return 0;
}
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}