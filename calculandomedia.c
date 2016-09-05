#include <stdio.h>

int main()
{
    char nome[20];
    float av1,av2,med, tot;
    //ler do teclado
    printf("Qual seu nome?");
    scanf("%s", nome);
    printf("Qual sua nota da av1?\n");
    scanf("%f", &av1);
    printf("Qual sua nota da av2?\n");
    scanf("%f", &av2);
    
    med = (av1 + av2) / 2;
    
    printf("Olá %s, sua média é =%.2f",nome,med);
    
    if(med>=6)
    {
        printf("\nVocê está aprovado!!");
    }
    else
    {
        printf("\nVocê está reprovado!!");
    }
    return 0;
}