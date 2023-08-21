#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* 
* 
*/

void print_rev(char *s)
{
    int leng = 0;
    int n;
    
    while (*s != '\0')
    {
            leng++;
            s++;
    }
    s--;
    for(n=leng; n > 0; n--)
    {
        _putchar(*s);
        s--;
    }
    _putchar('\n');
}
