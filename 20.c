//Write a program to display sum and average of numbers from 1 to n. Use for loop.
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, avg;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    avg = sum/n;
    printf("%.1f %.2f",sum, avg);
    
    return 0;
}
