#include <stdio.h>
void revers ();

int
main ()
{
  int a, b;
  printf ("enter the fist number:");
  scanf ("%d", &a);
  printf ("enter the secend number:");
  scanf ("%d", &b);
  revers (a, b);
    
}
//REVERSE FUNCTION 
void revers (int a, int b)
{
    int d;
    d=b;
    b=a;
    a=d;
    printf("first number: %d \n",a);
	printf("first number: %d",b);
}
