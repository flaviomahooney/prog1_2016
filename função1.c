#include <stdio.h>


float media_lasalle(float n1, float n2, float n3)

{
    float media;
    
    if(n1 >= n2 && n2>= n3)
    {
        media = (n1 + n2) / 2;
    }
    else if(n1 >= n2 && n2 <= n3)
    {
        media = (n1 + n3) / 2;
     }
     else
    {
        media = (n2 + n3) / 2;
     }
     return media;
}

int main()

{
    float av1,av2,av3;
    float media;
    
    printf("Digite av1:");
    scanf("%f",&av1); 
    printf("Digite av2:");
    scanf("%f",&av2); 
    printf("Digite av3:");
    scanf("%f",&av3);
    
    media = media_lasalle(av1,av2,av3);
    
    printf("Sua média é: %.2f\n",media);
    
    return 0;
    
    
}