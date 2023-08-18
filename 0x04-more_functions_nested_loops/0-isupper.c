#include <stdio.h>
#include "main.h"

/**
* Return 1 in uppercase
* Return 0 otherwise 
*/

int _isupper(int c)
{
    if (c == 'A' && c == 'Z')
            return(1);
    else
            return(0);
}

