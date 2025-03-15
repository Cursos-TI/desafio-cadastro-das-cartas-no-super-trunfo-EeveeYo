#include <stdio.h>


   int main() {
   
   //Váriaveis carta 01

   char Estado[1];
   char Codigo[3];
   char Cidade[50];
   int Populacao;
   float AreaKm;
   float PIB;
   int PontosTuristicos;

   //Váriaveis carta 02

   char Estado2[1];
   char Codigo2[3];
   char Cidade2[50];
   int Populacao2;
   float AreaKm2;
   float PIB2;
   int PontosTuristicos2;


   //Entrada de dados

   //Carta01 Estado A
   
   printf("\n*** Carta 01 ***\n");
   printf ("Digite a letra do estado: \n");
   scanf("%s",Estado);

   printf("Digite o código da carta: \n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s",Cidade);

   printf("Digite a população: \n");
   scanf("%d", &Populacao);

   printf("Digite a área em Km²: \n");
   scanf("%f", &AreaKm);

   printf("Digite o PIB (bilhões de reais): \n");
   scanf("%f", &PIB);

   printf ("Digite os pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);

   printf("Estado:%s\n",Estado);
   printf("Codigo:%s\n",Codigo);
   printf("Cidade:%s\n",Cidade);
   printf("Populacao:%d\n",Populacao);
   printf("Area em km:%.2f\n", AreaKm);
   printf("PIB:%.2f bilhões de reais \n",PIB);
   printf("Pontos Turisticos:%d\n",PontosTuristicos);

   //Carta02 Estado B
   
   printf("\n*** Carta 02 ***\n");
   printf("Digite a letra do estado2: \n");
   scanf("%s",Estado2);

   printf("Digite o código da carta2: \n");
   scanf("%s",Codigo2);

   printf ("Digite o nome da cidade2: \n");
   scanf("%s",Cidade2);

   printf("Digite a população2: \n");
   scanf("%d",&Populacao2);

   printf("Digite a área em Km²2: \n");
   scanf("%f",&AreaKm2);

   printf("Digite o PIB2 (bilhões de reais): \n");
   scanf("%f",&PIB2);

   printf("Digite os pontos turisticos2: \n");
   scanf("%d",&PontosTuristicos2);

   printf("Estado2:%s\n",Estado2);
   printf("Codigo2:%s\n",Codigo2);
   printf("Cidade2:%s\n",Cidade2);
   printf("Populacao2:%d\n",Populacao2);
   printf("Area em Km2:%.2f\n",AreaKm2);
   printf("PIB2:%.2f bilhões de reais\n",PIB2);
   printf("Pontos Turisticos2:%d\n",PontosTuristicos2);

   return 0;


}
