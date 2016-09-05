#include <stdio.h>
//gerar tabuada multiplicao
int main()
{
    int i, mult,num;
   
  for(num=1;num<=10;num++)
  {    
     printf("\nTabuada de Multiplicacao %d", num);      
  
   for(i=1; i<=10; i++)
   {
       mult= num * i;
       printf("\n %d x %d = %d", num, i, mult);
   }
  }
   return 0;
}