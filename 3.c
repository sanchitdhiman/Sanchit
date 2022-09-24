#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], vowels[10] = {'A','a','E','e','I','i','O','o','U','u'};
    int i, nv = 10, count = 0;
    gets(text);
    for (i = 0; i < strlen(text); i++) {
        for (int j = 0; j < nv; j++) {
            if (text[i] == vowels[j]) {
                count++;
            }
        }
    }
    printf("%d", count);
    
    return 0;
}
