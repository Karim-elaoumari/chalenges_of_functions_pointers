#include <stdio.h>
typedef enum {false=0, true=1} bool;
bool isPremier();
main ()
{
  int a;
  printf ("enter the fist number:");
  scanf ("%d", &a);
  if(isPremier(a)==true)
   {
      printf(" %d est un nombre premier.",a);
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",a);
   }
  
}
//CHECKING FUCTION TO SEE IF NUM IS PREMIER OU NON
bool isPremier(int a)
{
    bool statue=true;
    int i;
    for(i=2; i<a; i++)
   {
      if(a%i==0)
      {
         statue=false;
      }
   }
   return statue;
   
}

