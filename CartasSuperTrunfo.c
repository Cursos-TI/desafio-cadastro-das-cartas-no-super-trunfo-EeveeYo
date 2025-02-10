#include <stdio.h>


   int main() {
   int Populacao;
   int Pontos;
   float Area;
   float PIB;
   char Estado, Codigo[20];
   char Nome [20];

   printf("Digite a Populacao\n");
   scanf("%d", &População);
   printf("Digite seus Pontos\n");
   scanf("%d", &Pontos);
   printf("Digite a Área\n");
   scanf("%f", &Area);
   printf("Digite o PIB\n");
   scanf("%f", &PIB);
   printf("Digite o Estado e o Codigo\n");
   scanf("%c", &Estado "%c", &Codigo);
   printf("Digite o Nome\n");
   scanf("%c", &Nome);

   printf("Populacao: %d - Pontos: %d", Populacao, Pontos);
   printf("Area: %f - PIB: %f", Area, PIB);
   printf("Estado: %c - Codigo: %c", Estado, Codigo);
   printf("Nome: %c", Nome);


   return 0;


}
