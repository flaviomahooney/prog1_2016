#include <stdio.h>
int main()
{
    int idade;
    
    printf("Diga sua idade:");
    scanf("%d",&idade);
    
    if(idade<16)
    {
        printf("Voce nao pode votar");
    }
    if(idade==16  ||
    idade==17 ||
    idade>70)
    {
        printf("Voto Facultativo");
    }
    if(idade>=18 && idade<=70)
    {
        printf("Voto Obrigatório");
    }
    
    
    return 0;
}