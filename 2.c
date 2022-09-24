#include <stdio.h>

int main()
{
    int n = 200, sum = 0, even;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d, ", i);
            sum += i;
        }
    }

    return 0;
}
