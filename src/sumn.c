#include "sumn.h"
#include <assert.h>
#include<stdio.h>

int sumn (int n)
{
    assert(n > 0); // to ensure it's not negative
    if ( n == 1)
    {
        return 1;
    }
    else
    {
        return sumn(n-1)+(2 * n -1);  // recursive step calculate (2*n-1)
    }
    
}