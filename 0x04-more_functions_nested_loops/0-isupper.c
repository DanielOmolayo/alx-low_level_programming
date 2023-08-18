#include <stdio.h>
#include "main.h"

/**
* Return 1 in uppercase
* Return 0 otherwise 
*/

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
            return(1);
    else
            return(0);
}

