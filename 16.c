//Write a program to print ‘Programming in C is Fun’ using pointers.
#include <stdio.h>

int main()
{
    char str[25] = "Programming in C is Fun", *ptr[25];
    *ptr = str;
    printf("%s",(*ptr));
    
    return 0;
}
