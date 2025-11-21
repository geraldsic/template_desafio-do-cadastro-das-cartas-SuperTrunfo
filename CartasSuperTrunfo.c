#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Bem vindo ao Super Trunfo");
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // VARIAVEIS PRA CARTA 1
  char estado[1];
  char codcarta[4];
  char cidade[50];
  int população;
  float area;
  float pib;
  int pturisticos;
    // VARIAVEIS PRA CARTA 2
  char estado2[1];
  char codcarta2[4];
  char cidade2[50];
  int população2;
  float area2;
  float pib2;
  int pturisticos2;

  // Área para entrada de dados
 // ENTRADA CARTA 1
  printf("Insira Dados Da PRIMEIRA Carta: \n");
  printf("Estado - Uma letra de 'A' a 'H': ");
  scanf("%s", estado);
  getchar();
  printf("Código da Carta: ");
  scanf("%s", codcarta);
  getchar();
  printf("Nome da Cidade: ");
  fgets (cidade, 50, stdin); // LINHA PROBLEMATICA 
  printf("População: ");
  scanf("%d", &população);
  getchar();
  printf("Área (em km²): ");
  scanf("%f", &area);  
  getchar();
  printf("PIB: ");
  scanf("%f", &pib);  
  getchar();
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pturisticos);  
  
  
// ENTRADA CARTA 2
  printf("\nInsira Dados Da SEGUNDA Carta: \n");
  printf("Estado - Uma letra de 'A' a 'H': ");
  scanf("%s", estado2);
  getchar();
  printf("Código da Carta: ");
  scanf("%s", codcarta2);
  getchar();
  printf("Nome da Cidade: ");
  fgets (cidade2, 50, stdin);
  printf("População: ");
  scanf("%d", &população2);
  getchar();
  printf("Área (em km²): ");
  scanf("%f", &area2);  
  getchar();
  printf("PIB: ");
  scanf("%f", &pib2);  
  getchar();
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pturisticos2);  

  // Área para exibição dos dados da cidade

//carta 2 exivição  
printf("\nCarta 1:\n");
printf("Estado: %s \n", estado); 
printf("Código: %s \n", codcarta);
printf("Cidade: %s \n", cidade);
printf("População: %d \n", população);
printf("Área %.2f km²\n", area / 100.0);
printf("PIB %.2f \n", pib / 100.0);
printf("Número de Pontos Turísticos: %d \n", pturisticos);

//carta 2 exivição
printf("\nCarta 2:\n");
printf("Estado: %s \n", estado2); 
printf("Código: %s \n", codcarta2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", população2);
printf("Área %.2f km²\n", area2 / 100.0);
printf("PIB %.2f \n", pib2 / 100.0);
printf("Número de Pontos Turísticos: %d \n\n", pturisticos2);

return 0;
} 