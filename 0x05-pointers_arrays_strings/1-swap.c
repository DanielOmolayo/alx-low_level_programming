#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* 
* 
*/

void swap_int(int *a, int *b)
{
    *a = b;
    *b = a;
}
