#include <stdio.h>

int main()
{
  int num;
  int total;
  
  //ler do teclado
  printf("\nDigite um número:");
  scanf("%d", &num);
  
  total = num % 2;
  
  if(total==0)
  {
      printf("Numero Par\n");
  }
  
  else
  {
      printf("Numero Impar\n");
  }
  
      return 0;
}