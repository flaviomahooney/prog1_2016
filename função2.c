#include <stdio.h>

int par(int num)
{
    
  if(num%2=0)
  {
   printf("Par");
  }
  else
  {
   printf("Ímpar");
  }
  return num;
}

int main()

{
    int variavel;
    int n;
    
    printf("Entre com um número:");
    scanf("%d",&n);
    variavel = par(n);
    
}