#include <stdio.h>


   int main(){
   
   //Váriaveis carta 01

   char Estado[1];
   char Codigo[3];
   char Cidade[50];
   unsigned long int Populacao;
   float AreaKm;
   float PIB;
   int PontosTuristicos;
   float DensidadePopulacional;
   float PIBperCapita;
   float SuperPoder;
   int Resultado;


   
   //Váriaveis carta 02

   char Estado2[1];
   char Codigo2[3];
   char Cidade2[50];
   unsigned long int Populacao2;
   float AreaKm2;
   float PIB2;
   int PontosTuristicos2;
   float DensidadePopulacional2;
   float PIBperCapita2;
   float SuperPoder2;
   int Resultado2;


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
   scanf("%lu", &Populacao);

   printf("Digite a área em Km²: \n");
   scanf("%f", &AreaKm);

   printf("Digite o PIB (bilhões de reais): \n");
   scanf("%f", &PIB);

   printf ("Digite os pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);


   //calculando densidade, PIB percapita e Super Poder da carta 01

   DensidadePopulacional = Populacao / AreaKm;
   PIBperCapita = (PIB * 1000000000)/ Populacao;
   SuperPoder = (Populacao + AreaKm + PIB + PontosTuristicos + PIBperCapita + 1/ DensidadePopulacional);


   printf("Estado:%s\n",Estado);
   printf("Codigo:%s\n",Codigo);
   printf("Cidade:%s\n",Cidade);
   printf("Populacao:%lu\n",Populacao);
   printf("Area em km²:%.2f\n", AreaKm);
   printf("PIB:%.2f bilhões de reais\n",PIB);
   printf("Pontos Turisticos:%d\n",PontosTuristicos);
   printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePopulacional);
   printf("PIBPerCapita : %.2f reais\n", PIBperCapita);
   printf("Super Poder: %.2f\n", SuperPoder);
    

   //Carta02 Estado B

   printf("\n*** Carta 02 ***\n");
   printf("Digite a letra do estado2: \n");
   scanf("%s",Estado2);

   printf("Digite o código da carta2: \n");
   scanf("%s",Codigo2);

   printf ("Digite o nome da cidade2: \n");
   scanf("%s",Cidade2);

   printf("Digite a população2: \n");
   scanf("%lu",&Populacao2);

   printf("Digite a área em Km²2: \n");
   scanf("%f",&AreaKm2);

   printf("Digite o PIB2 (bilhões de reais): \n");
   scanf("%f",&PIB2);

   printf("Digite os pontos turisticos2: \n");
   scanf("%d",&PontosTuristicos2);

    //calculando densidade, PIB percapita e Super poder da carta 02

    DensidadePopulacional2 = Populacao2 / AreaKm2;
    PIBperCapita2 = (PIB2 * 1000000000)/ Populacao2;
    SuperPoder2 = (Populacao2 + AreaKm2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + 1/ DensidadePopulacional2);




   printf("Estado2:%s\n",Estado2);
   printf("Codigo2:%s\n",Codigo2);
   printf("Cidade2:%s\n",Cidade2);
   printf("Populacao2:%lu\n",Populacao2);
   printf("Area em Km2:%f\n",AreaKm2);
   printf("PIB2:%.2f bilhões de reais\n",PIB2);
   printf("Pontos Turisticos2:%d\n",PontosTuristicos2);
   printf("Densidade Populacional2: %.2f hab/km²\n", DensidadePopulacional2);
   printf("PIBPerCapita2 : %.2f reais\n", PIBperCapita);
   printf("Super Poder2: %.2f\n", SuperPoder2);

   //Comparação da carta 01

   printf("População: Carta 01 venceu (%d)\n",Populacao > Populacao2);
   printf("Área: Carta 01 venceu (%d)\n",AreaKm > AreaKm2);
   printf("PIB: Carta 01 venceu (%d)\n",PIB > PIB2);
   printf("Pontos Turísticos: Carta 01 venceu (%d)\n",PontosTuristicos > PontosTuristicos2);
   printf("Densidade Populacional: Carta 02 venceu (%d)\n",DensidadePopulacional > DensidadePopulacional2);
   printf("PIBPerCapita: Carta 01 venceu (%d)\n",PIBperCapita > PIBperCapita2);

   //Comparação da carta 02

   printf("População: Carta 02 venceu (%d)\n",Populacao2 > Populacao);
   printf("Área: Carta 02 venceu (%d)\n",AreaKm2 > AreaKm);
   printf("PIB: Carta 02 venceu (%d)\n",PIB2 > PIB);
   printf("Pontos Turísticos: Carta 02 venceu (%d)\n",PontosTuristicos2 > PontosTuristicos);
   printf("Densidade Populacional: Carta 01 venceu (%d)\n",DensidadePopulacional2 > DensidadePopulacional);
   printf("PIBPerCapita: Carta 02 venceu (%d)\n",PIBperCapita2 > PIBperCapita);

   //resultado

   printf ("\n***Resultado:***\n");
   printf("Carta 01: (%d)\n", Resultado > Resultado2);
   printf("Carta 02: (%d)\n", Resultado2 > Resultado);



return 0;


}