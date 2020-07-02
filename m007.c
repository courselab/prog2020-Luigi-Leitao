/* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Count the number of letters in string s.*/

int lettercount (char *s)
{
int i;
int count;
count = 0;

for(i=0;i<MAX;i++)
{
switch (s[i])
case  'a':
case  'b':
case  'c':
case  'd':
case  'e':
case  'f':
case  'g':
case  'h':
case  'i':
case  'j':
case  'k':
case  'l':
case  'm':
case  'n':
case  'o':
case  'p':
case  'q':
case  'r':
case  's':
case  't':
case  'u':
case  'v':
case  'w':
case  'x':
case  'y':
case  'z':
case  'A':
case  'B':
case  'C':
case  'D':
case  'E':
case  'F':
case  'G':
case  'H':
case  'I':
case  'J':
case  'K':
case  'L':
case  'M':
case  'N':
case  'O':
case  'P':
case  'Q':
case  'R':
case  'S':
case  'T':
case  'U':
case  'V':
case  'W':
case  'X':
case  'Z':
count = count + 1;
break; 
}
return count;
}


/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
