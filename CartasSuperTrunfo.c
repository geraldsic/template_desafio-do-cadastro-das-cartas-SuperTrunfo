#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Bem vindo ao Super Trunfo");
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados
 
  printf("Insira Dados Da PRIMEIRA Carta: \n");
  printf("Estado: Uma letra de 'A' a 'H'");
  scanf("%s", &estado);
    getchar();
  printf("Código da Carta:");
     scanf("%s", &codcarta);
    getchar();
  printf("Nome da Cidade:");
  scanf("%s", &cidade);

  printf("População:");
  scanf("%d", &população);

  printf("Área (em km²): \n");
  scanf("%f", &area);  

  printf("PIB: \n");
  scanf("%f", &pib);  

  printf("Número de Pontos Turísticos: \n");
  scanf("%d", &pturisticos);  


  // Área para exibição dos dados da cidade
printf("Carta 1:\n");
printf("Estado: %s\n", estado); 
printf("Carta: %s\n", codcarta);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", população);
printf("Área %.2f km²\n", area / 100.0);
printf("PIB %.2f \n", pib / 100.0);



return 0;
} 