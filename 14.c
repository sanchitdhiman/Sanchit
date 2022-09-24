//Write a program to calculate area of a triangle using function.
#include <stdio.h>
#include <math.h>

int area_of_triangle(float side1, float side2, float side3) {
    float area, s;
    s = (side1 + side2 + side3)/2;
    area = pow((s*(s - side1)*(s - side2)*(s - side3)),(0.5));
    return area;
}

int main()
{
    float a, b, c, area;
    scanf("%f %f %f", &a, &b, &c);
    area = area_of_triangle(a,b,c);
    printf("%.2f",area);
    
    return 0;
}
