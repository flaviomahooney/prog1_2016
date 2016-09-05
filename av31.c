#include <stdio.h>
int main()
{
    int n,fatorial;
    
    printf("Entre com um número inteiro positivo:");
    scanf("%d",&n);
   
    printf("O fatorial de %d",n);
    
    for(fatorial=1;n>=1;n--) 
    {
        fatorial = fatorial * n;
    }
    
    printf(" eh igual a %d",fatorial);
    
    return 0;
}