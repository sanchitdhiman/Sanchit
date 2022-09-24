//Write a program to read a character and print it. Also print its ASCII value. If the character is in lower case, print it in upper case and vice versa. Repeat the process until a ‘*’ is entered.
#include <stdio.h>

int main();
int fun(char* ch) {
    if ((*ch >= 48) && (*ch <= 57)) {
        printf("%c - %d\n", *ch, *ch);
    }
    else if ((*ch >= 65) && (*ch <= 90)) {
        printf("%c - %d - %c\n", *ch, *ch, ((int)(*ch) + 32));
    }
    else if ((*ch >= 97) && (*ch <= 122)) {
        printf("%c - %d - %c\n", *ch, *ch, ((int)(*ch) - 32));
    }
    main();
}

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '*') {
        fun(&ch);
    }
    
    return 0;
}
