#include <stdio.h>

/*Criar um programa em C que permita ao usuário inserir os dados 
de duas cartas do Super Trunfo.
*/
int main() {
    char estado1, estado2;
    char codcarta1[4], codcarta2[4];
    char cidade1[20], cidade2[20];
    double populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //coletando dados da primeira carta
    printf("Escolha uma letra entre 'A' a 'H' para representar seu estado: \n");
    scanf(" %c", &estado1);

    printf("escolha o codigo da carta, deve A letra do estado escolhido,\nseguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codcarta1);

    printf("Digite o nome da Cidade escolhida: \n");
    scanf("%s", cidade1);

    printf("Qual a população da cidade? \n");
    scanf("%lf", &populacao1);


    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos túristicos tem na cidade escolhida? \n");
    scanf("%d", &pontosturisticos1);

    //coletando dados da segunda carta
    printf("=== Agora vamos para a segunda carta === \n");
    printf("Escolha uma letra entre 'A' a 'H' para representar seu estado: \n");
    scanf(" %c", &estado2);

    printf("escolha o codigo da carta, deve A letra do estado escolhido,\nseguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codcarta2);
 
    printf("Digite o nome da Cidade escolhida: \n");
    scanf("%s", cidade2);
 
    printf("Qual a população da cidade? \n");
    scanf("%lf", &populacao2);
 
 
    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area2);
    
    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);
 
    printf("Quantos pontos túristicos tem na cidade escolhida? \n");
    scanf("%d", &pontosturisticos2);

   // Imprimindo resultados das cartas
   printf("\n====== Carta 1 ======\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codcarta1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %lf habitantes\n", populacao1);
   printf("Área: %f km²\n", area1);
   printf("PIB: R$ %f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

   printf("\n====== CARTA 2 ======\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codcarta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %lf habitantes\n", populacao2);
   printf("Área: %f km²\n", area2);
   printf("PIB: R$ %f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);



   return 0;
}
