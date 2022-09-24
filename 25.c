//Write a program to calculate area of a triangle using pointers.
#include <stdio.h>
#include <math.h>

float area_tri(float* a, float* b, float* c, float* area) {
    double s;
    s = ((*a)+(*b)+(*c))/2;
    *area = pow((s*(s - *a)*(s - *b)*(s - *c)),(0.5));
}

int main()
{
    float a, b, c, area, s;
    scanf("%f %f %f", &a, &b, &c);
    area_tri(&a,&b,&c,&area);
    printf("%f",area);
    
    return 0;
}
