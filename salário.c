#include <stdio.h>
int main ()
{
int x;
float sal[5],cont=0,media;

for(x=0;x<=4;x++)
{
    printf("Qual o seu salário?");
    scanf("%f",&sal[x]);
    cont = cont + sal[x];
}
  media = cont / 5;
  printf("%.2f",media);
  return 0;
}