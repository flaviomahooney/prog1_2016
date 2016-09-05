#include <stdio.h>
int main()
{
    //ler do teclado
   float av1[10];
   int x,quantm=0;
   float soma=0,media=0;
   float maior=-999;
   float porcentagem;
   int percent;
   
   for (x=0;x<=9;x++)
   {
      printf("\nEntre com av1 do aluno %d:",x+1);
      scanf("%f",&av1[x]);
      soma = soma + av1[x];
      if(av1[x] > maior)
      {
          maior = av1[x];
      }
   }
     media = soma / x;
     printf("\nMédia= %.2f\n",media);
   for (x=0;x<=9;x++)
   {
    if(av1[x]>=media)
    {
       printf("\nA nota %.2f do aluno %d foi maior que a média",av1[x],x+1);
    }
    if(av1[x] == maior)
    {
        quantm++;
    }
    if(av1[x] >= 6)
    {
       porcentagem++;
    }
   } 
   
   percent = (float)porcentagem / x;
   
   
   
   
   printf("\nA porcentagem de alunos acima de 6 é:%.2f%%",porcentagem*10);
      return 0;
}