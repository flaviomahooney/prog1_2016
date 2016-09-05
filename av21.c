#include <stdio.h>
int main()
{
    
    float sal[10],cont=0,media=0,porcentagem=0;
    int i,porcent=0;
    
    for(i=0;i<=9;i++)
    {
        printf("Digite o salario:");
        scanf("%f",&sal[i]);
        cont = cont + sal[i];
    }
      media = cont / 10;
      printf("%.2f\n",media);
      
      if(sal[i]>media)
      {
          porcent++;
      }
       
      porcentagem = ((float)porcent * 10) / 100;
      
       printf("%.2f%% recebem acima da media",porcentagem);
       
    return 0;
}