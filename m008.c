/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name
   form into LAST-first-middle form. */

void lastname (char *s)
{
  char n[MAX];
  char m[MAX];
  int i, j;
  int space_loc;
  int p;

  strcpy(n, s);
  p = strlen(s);

  i=0;
  while (n[i] != 0)
  {
    if ((n[i] = 32))
     {
    space_loc = i;
     }
     i++;
  }

  for (j = space_loc + 1 ; j < p ; j++)
  {
   if( (n[j] >= 'a') && (n[j] <= 'z') ) 
   {
    m[j - space_loc - 1] = n[j] - 32;
   }
    else
    {
      m[j - space_loc - 1] = n[j];
    }
  }

  m[space_loc - 1] = ',';
  m[p - space_loc] = 32;

  for (j=0; (j < space_loc) ; j++)
  {
    m[(space_loc+1+j)] = n[j];
  }
    m[ p + 1 ] = 0;
  
  strcpy(s, m);
}
/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);

  lastname (name);

  printf ("%s\n", name);

  return 0;
}
