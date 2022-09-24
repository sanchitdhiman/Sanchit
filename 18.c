//Write a program to add three floating point numbers. The result should contain only two digits after the decimal.
#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%f + %f + %f = %.2f",a,b,c,(a+b+c));
    
    return 0;
}
