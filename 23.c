//Write a program to read numbers until –1 is entered and display whether it is an Armstrong number or not.
#include <stdio.h>

int main();
int armstrong(int* n) {
    int sum = 0, temp, copy;
    copy = *n;
    while(copy != 0) {
        temp = copy % 10;
        sum += temp*temp*temp;
        copy /= 10;
    }
    if (sum == *n) {
        printf("Armstrong Number!\n");
    }
    else {
        printf("Not Armstrong Number!\n");
    }
    main();
}

int main()
{
    int n;
    scanf("%d",&n);
    if (n != -1) {
        armstrong(&n);
    }
    
    return 0;
}
