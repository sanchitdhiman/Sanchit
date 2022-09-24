//Write a program to add two floating point numbers using pointers and functions.
#include <stdio.h>
#include <stdlib.h>

float add(float* num1, float* num2, float* sum) {
    *sum = *num1 + *num2;
}

int main()
{
    float *a = (float*)malloc(sizeof(float));
    float *b = (float*)malloc(sizeof(float));
    float *c = (float*)malloc(sizeof(float));
    scanf("%f %f",a,b);
    add(a,b,c);
    printf("%.2f",*c);

    return 0;
}
