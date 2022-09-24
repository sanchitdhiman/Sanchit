/*Write a program that prints a floating point value in exponential format with the following specifications:
(a) correct to two decimal places;
(b) correct to four decimal places; and
(c) correct to eight decimal places.*/

#include <stdio.h>
 
int main()
{
    float num;
    int e = 0;
    scanf("%f", &num);
    while (num > 9) {
        num /= 10;
        e++;
    }
    printf("(a)%.2fE%d\n",num,e);
    printf("(b)%.4fE%d\n",num,e);
    printf("(c)%.8fE%d",num,e);
    
    return 0;
}
