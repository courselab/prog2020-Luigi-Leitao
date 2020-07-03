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

<<<<<<< HEAD
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
=======
#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/
void sort (int *c, int *b, int *a)
{
 int aux;

  if (*a>*b && *a>*b)
  {
    if (*c>*b)
    {
      aux = *b;
      *b = *c;
      *c = aux; 
    }
  }
  if (*b>*a && *b>*c)
  {
    if (*c>*a)
    {
      aux = *b;
      *c = *a;
      *b = *c;
      *a = aux;
    }
    if(*a>*c)
    {
      aux = *b;
      *b = *a;
      *a = aux;
    }
  }
    if(*c>*a && *c>*b)
    {
      if (*a>*b)
      {
        aux = *c;
        *c = *b;
        *b = *a;
        *a = aux;
      }
      if (*b>*a)
      {
        aux = *c;
        *c = *a;
        *a = aux;
      }

    }
  
    
  
>>>>>>> d47a60380a75bd15bec6217270cfe855c1407b98
}



/* Do not edit this function. */
