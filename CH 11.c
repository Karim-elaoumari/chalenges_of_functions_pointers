#include <stdio.h>
typedef enum {false=0, true=1} bool;

bool is_leap_year();
int main ()
{
  int year;
  printf ("enter the year:");
  scanf ("%d", &year);
  
  if(is_leap_year(year)==true)
   {
      printf(" %d est une anne bissextile",year);
   }
   else
   {
      printf(" %d n'est pas une anne bissextile",year);
   }
  
}
//CHECKING FUCTION TO SEE IF NUM IS PREMIER OU NON
bool is_leap_year(int year)
{
    bool statue=true;
    if(year%400==0){
        statue=true;
    }
    else if((year%4)==0 && (year%100)!=0){
        statue=true;
    }
    else{
        statue=false;
    }  
      
    return statue;
    
    
}
   
