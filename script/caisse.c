//Script qui génère une valeur à payer

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   srand(time(NULL));
   float invoice=(float)rand()/((float)RAND_MAX/1000);
   printf("Net à payer: MUR %f\n",invoice);
   float paid=0;
   while (paid<invoice)
   {
     printf("Somme payé: MUR\n");
     scanf("%f",&paid);
     if (paid<invoice)
  	printf("Pas assez!\n");
   }
}
