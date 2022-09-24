//Write a program to print all prime numbers from m to n.
#include <stdio.h>

int main()
{
    int m, n, i, j, count;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        count = 2;
        for (j = 2; j < i; j++) {
            if ((i % j) != 0) {
                count++;
            }
        }
        if (count == i) {
            printf("%d ",i);
        }
    }
    
    return 0;
}
