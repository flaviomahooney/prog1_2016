#include <stdio.h>

int main()
{
    int l1,l2,l3;
    
    printf("Entre com o primeiro angulo: ");
    scanf("%d",&l1);
    printf("Entre com o segundo angulo: ");
    scanf("%d",&l2);
    printf("Entre com o terceiro angulo: ");
    scanf("%d",&l3);
    
    
    if ( (l1 == l2 && l1 == l3 ) ||
    (l2 == l1 && l2 == l3) ||
    (l3 == l1 && l3 == l2))
    {
        printf("Equilátero");
    }
    if ((l1 == l2) && (l1>l3 || l1 < l3) || 
    (l2 == l3) && (l2>l1 || l2 < l1) || 
    (l3 == l1) && (l3>l2 || l3 < l2) )
    {
        printf("Isósceles");
    }
    if ((l1>l2 || l1<l2) && (l1>l3 || l1<l3) ||
    (l2>l1 || l2<l1) && (l2>l3 || l2<l3) ||
    (l3>l2 || l3<l2) && (l3>l1 || l3<l1))
    {
        printf("Escaleno");
    }
    
    return 0;
}