//Write a program to find whether a number is divisible by two or not using functions.
#include <stdio.h>

int divisible(int num) {
    char const *s;
    s = ((num % 2) == 0) ? "Divisible" : "Not Divisible";
    puts(s);
}

int main()
{
    int n;
    scanf("%d", &n);
    divisible(n);
    
    return 0;
}
