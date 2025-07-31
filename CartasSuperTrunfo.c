#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[20], estado2[20];
  char codigo1[20], codigo2[20];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosturiscos1, pontosturiscos2;

  // Área para entrada de dados


  // Coleta de dados carta 1 
  printf("Digite o estado:");
  scanf (" %s", estado1);
  printf("Digite o codigo da carta:");
  scanf(" %s", codigo1);
  printf("Digite o nome da Cidade:");
  scanf(" %s", cidade1);
  printf("Digite a População");
  scanf("%d", &populacao1);
  printf("Digite o valor da área em Km²:");
  scanf("%f", &area1);
  printf("Digite o valor do Pib:");
  scanf("%f", &pib1);
  printf("Digite o número de Pontos Túristicos:"); 
  scanf("%d", &pontosturiscos1);


  //Coleta de dados carta 2

  printf("Digite o estado:");
  scanf(" %s", estado2);
  printf("Digite o código da carta:");
  scanf(" %s", codigo2);
  printf("Digite o nome da cidade:");
  scanf(" %s", cidade2);
  printf("Digite a População:");
  scanf("%d", &populacao2);
  printf("digite o valor da Área em Km²:");
  scanf("%f", &area2);
  printf("Digite o valor do PIB:");
  scanf("%f", &pib2);
  printf("Digite o número de Pontos Turísticos:");
  scanf("%d", &pontosturiscos2);



  // Área para exibição dos dados da cidade

  //Impressão de dados carta 1


  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %2f\n", area1);
  printf("PIB: %2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturiscos1);

  // Impressão de dados carta 2


  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %2f\n", area2);
  printf("PIB: %2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturiscos2);


return 0;
} 
