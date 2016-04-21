#include <stdio.h>

int main()
{
    int atual;
    int nascimento;
    int anos;
    
    atual = 2016;
    
    //ler do telado
    
    printf("\nQual ano voce nasceu?");
    scanf("%d", &nascimento);
    
    anos = atual - nascimento;
    
    printf("\nVoce possui %d anos\n", anos);
    
    
    return 0;
}