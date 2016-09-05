#include <stdio.h>
int main()
{
    float cel,far;
    
    printf("Diga a quantidade de graus celsius:");
    scanf("%f",&cel);
    
    far = (cel * 1.8) + 32;
    
    printf("%.2f graus Fahrenhei", far);
    
    
    return 0;
}