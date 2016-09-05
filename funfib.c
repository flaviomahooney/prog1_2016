#include <stdio.h>

void fibonacci(int num)
{
int n1=0,n2=1,i,aux;

 for(i=0;i<=num;i++)
    {
     aux = n1;
     printf("%d\n",aux);
     n1 = n2;
     n2 = aux + n1;
    }
    
}   
 int main()
 {
      
     int variavel;
     int num;
     
     printf("Entre com o numero de vezes:");
     scanf("%d",&variavel);
     
     num = fibonnaci(variavel);
    
     return 0;
 }
    