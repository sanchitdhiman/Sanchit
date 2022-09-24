//Write a program to find the smallest of three integers using functions.
#include <stdio.h>

int smallest(int num1, int num2, int num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        }
        else {
            return num3;
        }
    }
    else if (num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main()
{
    int a, b, c, small;
    scanf("%d %d %d", &a, &b, &c);
    small = smallest(a,b,c);
    printf("%d",small);
    
    return 0;
}
