#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* 
* 
*/

int _strlen(char *s)
{
    int leng = 0;
    
    while (*s != '\0')
    {
            leng++;
            s++;
    }
    return (leng);
}
