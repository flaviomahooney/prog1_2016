#include <stdio.h>

int fat(int n)
{
    int fatorial;
    
    for(fatorial=1; n>=1; n--)
        fatorial = fatorial * n;
    
    return fatorial;
}

void lista(n1=1,n2=2,n3=3,op)

{
    printf("************************\n");
    printf("*Funções Matemáticas\n");
    printf("************************\n");
    printf("1 - Imprimir Fibonacci\n");
    printf("2 - Calcular fatorial\n");
    printf("3 - Calcular Sigma\n");
    printf("************************\n");
    printf("*Digite a opção:\n");
    scanf("%d",&op);
    printf("************************\n");
    
    
}


int main()

{
    
    return 0;
}