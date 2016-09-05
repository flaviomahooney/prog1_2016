#include <stdio.h>
int main()
{
    
    float sal[10],cont,media,porcent,porcentagem;
    int i;
    
    for(i=0;i<=9;i++)
    {
        printf("Digite o salario:");
        scanf("%f",&sal[i]);
        cont = cont + sal[i];
    }
      media = cont / 10;
      printf("%d",media);
      
      if(sal[i]>media)
      {
          porcent++;
      }
       
       porcentagem = (porcent * 100) / 10;
       
       printf("%d%% recebem acima da media");
       
    return 0;
}