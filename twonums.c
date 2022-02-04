#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter a number= ");
    scanf("%d", &a);
    printf("enter another number=");
    scanf("%d", &b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a / b;
    float g = a % b;
    printf("the sum is= %d \n", c);
    printf("the differnce is= %d \n", d);
    printf("the product is= %d \n", e);
    printf("the division is= %f \n", f);
    printf("the remainder is= %f \n", g);
    return 0;
}
