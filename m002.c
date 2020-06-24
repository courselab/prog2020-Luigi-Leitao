/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/
void sort (int *a, int *b, int *c)
{
 int aux;

 if( *a>*b && *a>*c && *b>*c )
 {
 aux = *b;
 *b = *c;
 *c = aux;  
 }
 if( *a>*b && *a>*c && *c>*b )
 {
 aux = *b;
 *b = *c;
 *c = aux;  
 }
 if( *b>*a && *b>*c && *a>*b )
 {
 aux = *c;
 *c = *a;
 *a = aux;  
 }
 if( *b>*a && *b>*c && *b>*a )
 {
 aux = *c;
 *c = *a;
 *a = aux;  
 }
 if( *c>*a && *c>*b && *b>*a )
 {
 aux = *b;
 *b = *a;
 *a = aux;  
 }
 if( *c>*a && *c>*b && *a>*b )
 {
 aux = *b;
 *b = *a;
 *a = aux;  
 }
 printf( "a ordem crescente sera: %d\n %d\n %d\n", *a, *b, *c);
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
