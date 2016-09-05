#include <stdio.h>
int main()
{
    float n1,n2,n3,me=0,ma=0;
    char nota;
    
    printf("Qual sua av1?");
    scanf("%f", &n1);
     printf("Qual sua av2?");
    scanf("%f", &n2);
     printf("Qual sua av3?");
    scanf("%f", &n3);
    
    me = (n1 + n2 + n3) / 3;
    
    ma = (n1 + (n2 *2) + (n3 *3) + me) / 7;
    
    
    printf("%.2f",ma);
    
    
    if(ma>=9)
    {
        printf("\nA");
    }
    if(ma>=7.5 && ma<9)
    {
        printf("\nB");
    }
    if(ma>=6 && ma<7.5)
    {
        printf("\nC");
    }
    if(ma>=4 && ma<6)
    {
        printf("\nD");
    }
    if(ma<4)
    {
        printf("\nE");
    }
    
       return 0;
}