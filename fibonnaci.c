#include <stdio.h>

int main()

{
  int n1;
  int n2;
  int fib;
  
  n1 = 1;
  n2 = 1;
  fib = 2;
  
  printf("\n%d",n1);
  printf("\n%d",n2);
  printf("\n%d",fib);
  
  while(fib < 150)
  {
  n1 = n2;
  n2 = fib;
  fib = n1 + n2;
  
  printf("\n%d",fib);
  }
 
   
   return 0;
}