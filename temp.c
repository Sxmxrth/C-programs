#include <stdio.h>
int main(int argc, char const *argv[])
{
    float f;
    printf("enter temp in Fahrenheit= ");
    scanf("%f", &f);
    float c = ((f - 32) * 5) / 9;
    printf("the temp in celcius is= %f \n", c);
    return 0;
}
