#include <stdio.h>

int main()
{
    int x,aux=0,media=0;
    
    for(x=1;x<=100;x++)
    {
        aux = aux + x;
    }
    media = aux / 100;
    printf("%d", media);
    return 0;
}