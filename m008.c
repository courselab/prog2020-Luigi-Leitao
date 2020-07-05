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
  int x;
  int p;

  strcpy(n, s);
  p = strlen(s);

  while (s[i] != 0)
  {
    if ((s[i] = 32))
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
      m[j-space_loc-1] = n[j];
    }
     x = j - space_loc - 1;
  }
  m[x + 1] = ',';
  m[x + 2] = 32;

  for (i=0; (i < space_loc) ; i++)
  {
    m[(i + x)] = n[i];
    m[ p + 1 ] = 0;
  }
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
