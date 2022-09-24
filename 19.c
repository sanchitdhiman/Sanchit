//Write a program to take input from the user and then check whether it is a number or a character. If it is a character, determine whether it is in upper case or lower case. Also print its ASCII value.
#include <stdio.h>

int main()
{
    char ch;
    int a;
    scanf("%c", &ch);
    a = ch;
    if ((a >= 48) && (a <= 57)) {
        printf("Number - %d",a);
    }
    else if ((a >= 65) && (a <= 90)) {
        printf("Character - Upper Case - %d",a);
    }
    else if ((a >= 97) && (a <= 122)) {
        printf("Character - Lower Case - %d",a);
    }
    
    return 0;
}
