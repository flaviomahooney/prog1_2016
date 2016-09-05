#include <stdio.h>
int main()
{
    float peso=0,sal[2];
    int x,cont=0,con=0;
    
    for(x=0;x<=1;x++)
    {
        printf("Diga seu peso:");
        scanf("%f",&peso);
    }
    
    for(x=0;x<=1;x++)
    {
        printf("Qual o seu salário?");
        scanf("%f",&sal[x]);
    }
    
    if(peso>=50)
    {
     cont++;
    }
    
    printf("%d\n",cont);
    
    if(sal[x]>=1000 || sal[x]<=3000)
    {
        con++;
    }
    printf("%d\n",con);
    
    
    
    
    
    return 0;
}