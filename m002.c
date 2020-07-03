/* m002.c - Sort three variables.

   This program takes three integers read as command
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

void lastname (char *s)
{
  char n[MAX];
  int i;
  int space_loc;
  int x;

  for (i=0 ; (n[i]=0) ; i++)
  {
    if ((n[i] = 32))
     {
    space_loc = i;
     }
  }

  for (i = space_loc + 1 ; (n[i]=0) ; i++)
  {
    n[(i - space_loc) - 1] = s[i];
    x = i - space_loc - 1;

  if(n[i] >= 'a' && n[i] <= 'z')
  {
    n[i] = n[i] - 32;
  }

  n[x + 1] = ',';
  n[x + 2] = 32;
  }


  for (i=0; (i < space_loc) ; i++)
  {
    n[(i + x)] = s[i];
  }

  strcpy(s, n);
}



/* Do not edit this function. */
