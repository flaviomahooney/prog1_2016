#include <stdio.h>

int main()

{
 int num,n1=0,n2=1,i,aux;
 
    printf("Entre com o numero de vezes:");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
     aux = n1;
     printf("%d\n",aux);
     n1 = n2;
     n2 = aux + n1;
    }
 
 
 
 
   return 0;
}