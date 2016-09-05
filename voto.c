#include <stdio.h>

int main()
{
 
   int voto;
   char cont;
   
   
   do
   {
   printf("Dilma 1 || Aécio 2\n");
   scanf("%d",&voto);
   
   if(voto==1)
   {
   printf("Dilma\n");
   }
   if(voto==2)
   {
    printf("Aecio\n");
   }
   if(voto!=1 && voto!=2)
   {
    printf("Erro\n");
   }

   printf("Você tem certeza de seu voto?(s/n)");
   scanf(" %c",&cont);

}while(cont=='s' || cont=='S');


   return 0;
}