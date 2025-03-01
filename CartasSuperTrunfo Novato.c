#include <stdio.h>


   int main() {
   
   //Váriaveis

   char Estado[30];
   char Codigo[3];
   char Cidade[50];
   int Populacao;
   float AreaKm2;
   float PIB;
   int PontosTuristicos;

   //Entrada de dados

   //Carta01 Estado A

   printf ("Digite o nome  do estado: \n");
   scanf("%s",Estado);

   printf("Digite o código da carta: \n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s",Cidade);

   printf("Digite a população: \n");
   scanf("%d", &Populacao);

   printf("Digite a área em Km2: \n");
   scanf("%f", &AreaKm2);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf ("Digite os pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);



}
