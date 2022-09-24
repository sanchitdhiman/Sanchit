/*Write a program to read an integer. Display the value of that integer in decimal, octal, and hexadecimal notation.*/

#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main()
{
    int num, oct = 0, quo, rem, count = 0;
    char hex[100];
    scanf("%d", &num);
    quo = num;
    while (quo > 0) {
        rem = quo % 8;
        quo /= 8;
        count++;
        oct += rem*(pow(10,(count-1)));
    }
    quo = num;
    for (int i = 0; quo != 0; i++) {
        rem = quo % 16;
        hex[i] = (rem > 10) ? (rem + 55) : (rem + 48);
        quo /= 16;
    }
    printf("%d - %d - ", num, oct);
    for (int j = strlen(hex) - 1; j >= 0; j--) {
        printf("%c",hex[j]);
    }
    
    return 0;
}
