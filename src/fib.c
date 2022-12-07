/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert (n > 0); //because the base case is fib 1, 1. 
    if (n == 1)                 
    {
        return p;
    }
    else if (n == 2)
    {
        return pp;   // p and pp to return the numbers 
    }
    
    else {
        return fib(n-1, pp, pp + p); // to find the n^th fib number 
    }
  
}
