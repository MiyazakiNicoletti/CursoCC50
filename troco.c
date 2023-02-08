#include <cs50.h>
#include <stdio.h>
#include <math.h>

float troco(void);

int main(void)

{

   float trocoPositivo;
   int trocoCentavos;
   int moeda25;
   int moeda10;
   int moeda5;
   int moeda1;

   trocoPositivo = troco();
   trocoCentavos = round(trocoPositivo * 100);

   while (trocoCentavos >= 25)
   {
      trocoCentavos = trocoCentavos - 25;
      moeda25 = moeda25 + 1;
   }
   while (trocoCentavos >= 10)
   {
      trocoCentavos = trocoCentavos - 10;
      moeda10 = moeda10 + 1;
   }
   while (trocoCentavos >= 5)
   {
      trocoCentavos = trocoCentavos - 5;
      moeda5 = moeda5 + 1;
   }
   while (trocoCentavos >= 1)
   {
      trocoCentavos = trocoCentavos - 1;
      moeda1 = moeda1 + 1;
   }
     printf("Quantidade de moedas de 25 :%i\n", moeda25);
   printf("Quantidade de moedas de 10 : %i\n", moeda10);
   printf("Quantidade de moedas de 05 : %i\n", moeda5);
   printf("Quantidade de moedas de 1 : %i\n", moeda1);

}

   float troco(void)
{
   float n;
   do
   {
       n = get_float("Valor Do troco: ");
   }
   while (n < 0);
   return n;
}





