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
  int i;
  int space_loc;
  int x;

  for (i=0 ; (n[i]=0) ; i++)
  {
    if ((n[i] = 32))
     {
    space_loc = i;
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
  }
  strcpy(s, n);
}



/* Do not edit this function. */




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
