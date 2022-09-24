//Write a program to print all odd numbers from m to n.
#include <stdio.h>

int main()
{
    int m, n, i, j, count;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d ",i);
        }
    }
    
    return 0;
}
