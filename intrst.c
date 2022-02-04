#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a = 500000 * 10 * 0.035;
    float b = (500000 * (pow((1 + 0.035), 10))) - 500000;
    float c = (500000 * (pow((1 + (0.035) / 2), 20))) - 500000;
    float d = (500000 * (pow((1 + (0.035) / 4), 40))) - 500000;
    float e = (500000 * (pow((1 + (0.035) / 12), 120))) - 500000;
    float f = (500000 * (pow((1 + (0.035) / 365), 3650))) - 500000;
    printf("Simple interest on Rs. 500000 is= %f \n", a);
    printf("Interest on Rs. 500000.00 in 10 years compounded annually= %f \n", b);
    printf("Interest on Rs. 500000.00 in 10 years compounded semi-annually= %f \n", c);
    printf("Interest on Rs. 500000.00 in 10 years compounded quarterly= %f \n", d);
    printf("Interest on Rs. 500000.00 in 10 years compounded monthly= %f \n", e);
    printf("Interest on Rs. 500000.00 in 10 years compounded daily= %f \n", f);

    return 0;
}
