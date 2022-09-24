#include <stdio.h>

int main()
{
    int a[10], n = 10;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i += 3) {
        printf("\n%d, %d, %d", a[i-1], a[i], a[i+1]);
    }

    return 0;
}
