#include <stdio.h>

int main()
{
  int num;
  //ler teclado
 do
 {
   printf("Entre com um numero de de 0 a 10");
  scanf("%d", &num);
 }
  while(num<=0||num>=10);
  printf("ok obrigado");
 
      return 0;
}