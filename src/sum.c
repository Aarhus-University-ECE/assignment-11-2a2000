#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  if (n > 1)
  {
    return sumtail(n-1, n + total);
  }
  else{ 
    return 1 + total; 
  }
  
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
 assert( n >= 1); //to ensure the while loop doesn't work for -n
 int t = 0; // to save the sum 
 while (n != 0) {
  n --;
  t += n; 
 }
 return t; 
}

