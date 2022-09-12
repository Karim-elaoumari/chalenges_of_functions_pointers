#include <stdio.h>
typedef enum {false=0, true=1} bool;
int dividedby();
bool isPremier();
main ()
{
  int a,b;
  printf ("enter the fist number:");
  scanf ("%d", &a);
  printf ("enter the secend number:");
  scanf ("%d", &b);
  if(isPremier(dividedby(a,b))==true)
   {
      printf(" %d est un nombre premier.",dividedby(a,b));
   }
   else
   {
      printf(" %d n'est pas un nombre premier.",dividedby(a,b));
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
int dividedby(int x,int y){
    return (x/y);
    
}


