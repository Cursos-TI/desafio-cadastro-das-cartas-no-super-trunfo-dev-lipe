#include <stdio.h>

/*Criar um programa em C que permita ao usuário inserir os dados 
de duas cartas do Super Trunfo.
*/
int main() {
    char estado1, estado2;
    char codcarta1[4], codcarta2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float superpoder1, superpoder2;

    //coletando dados da primeira carta
    printf("Escolha uma letra entre 'A' a 'H' para representar seu estado: \n");
    scanf(" %c", &estado1);

    printf("escolha o codigo da carta, deve A letra do estado escolhido,\nseguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codcarta1);

    printf("Digite o nome da Cidade escolhida: \n");
    //scanf("%s", cidade1);
    scanf(" %[^\n]", cidade1);

    printf("Qual a população da cidade? \n");
    scanf("%lu", &populacao1);


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
    //scanf("%s", cidade2);
    scanf(" %[^\n]", cidade2);
 
    printf("Qual a população da cidade? \n");
    scanf("%lu", &populacao2);
 
 
    printf("Qual a área da cidade em km²? \n");
    scanf("%f", &area2);
    
    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);
 
    printf("Quantos pontos túristicos tem na cidade escolhida? \n");
    scanf("%d", &pontosturisticos2);

   // *********Imprimindo resultados das cartas*********

   //*********carta1*********
   printf("\n====== Carta 1 ======\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codcarta1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %lu habitantes\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: R$ %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
   
   densidade1 = populacao1 / (area1 + (area1 == 0));
   printf("Densidade populacional: %.2lf por km²\n", densidade1);
   
   pibpc1 = (pib1 * 1000000000.0) / (populacao1 + (populacao1 == 0));
   printf("PIB per capita: %.2lf reais\n", pibpc1);


   //*********carta2*********
   printf("\n====== CARTA 2 ======\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codcarta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %lu habitantes\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: R$ %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
   
   densidade2 = populacao2 / (area2 + (area2 == 0));
   printf("Densidade populacional: %.2lf por km²\n", densidade2);

   pibpc2 = (pib2 * 1000000000.0) / (populacao2 + (populacao2 == 0));
   printf("PIB per capita: %.2lf reais\n", pibpc2);

   printf("\n======= SUPER PODER =======\n");

   
   // Calculando o Super Poder (somando os atributos numéricos)
   superpoder1 = (float)(populacao1 + area1 + pib1 + pontosturisticos1 + (1.0 / densidade1) + pibpc1);
   printf("o super poder da carta 1 é: %f\n", superpoder1);
   superpoder2 = (float)(populacao2 + area2 + pib2 + pontosturisticos2 + (1.0 / densidade2) + pibpc2);
   printf("o super poder da carta 2 é: %f\n", superpoder2);


    // Exibindo os resultados das comparações
    printf("\n=== Comparação de Cartas ===\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);

    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2 ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);
    




   return 0;
}