#include <stdio.h>


   int main() {
   
   //Váriaveis

   char Estado[1];
   char Codigo[3];
   char Cidade[50];
   int Populacao;
   float AreaKm;
   float PIB;
   int PontosTuristicos;

   char Estado2[1];
   char Codigo2[3];
   char Cidade2[50];
   int Populacao2;
   float AreaKm2;
   float PIB2;
   int PontosTuristicos2;


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

   printf("Digite a área em Km: \n");
   scanf("%f", &AreaKm);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf ("Digite os pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);

   printf("Estado:%s\n",Estado);
   printf("Codigo:%s\n",Codigo);
   printf("Cidade:%s\n",Cidade);
   printf("Populacao:%d\n",Populacao);
   printf("Area em km:%f\n", AreaKm);
   printf("PIB:%f\n",PIB);
   printf("Pontos Turisticos:%d\n",PontosTuristicos);

   //Carta02 Estado B

   printf("Digite o nome do estado2: \n");
   scanf("%s",Estado2);

   printf("Digite o código da carta2: \n");
   scanf("%s",Codigo2);

   printf ("Digite o nome da cidade2: \n");
   scanf("%s",Cidade2);

   printf("Digite a população: \n");
   scanf("%d",&Populacao2);

   printf("Digite a área em Km2: \n");
   scanf("%f",&AreaKm2);

   printf("Digite o PIB2: \n");
   scanf("%f",&PIB2);

   printf("Digite os pontos turisticos2: \n");
   scanf("%d",&PontosTuristicos2);

   printf("Estado2:%s\n",Estado2);
   printf("Codigo2:%s\n",Codigo2);
   printf("Cidade2:%s\n",Cidade2);
   printf("Populacao2:%d\n",Populacao2);
   printf("Area em Km22:%f\n",AreaKm2);
   printf("PIB2:%f\n",PIB2);
   printf("Pontos Turisticos2:%d\n",PontosTuristicos2);

   return 0;


}
