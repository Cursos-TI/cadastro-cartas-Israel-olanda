#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;
  char codigoDaCarta[5], codigoDaCarta2[5]; 
  char nomeCidade[50], nomeCidade2[50];
  int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
  float pib, area, pib2, area2, densidadeDemografica, pibPerCapita, densidadeDemografica2, pibPerCapita2;

  // Área para entrada de dados
  // Carta 1
  printf("Criação carta 1\n");
  
  printf("insira a letra correspondente ao seu estado: ");
  scanf("%c", &estado);
  
  printf("Insira o código da carta: ");
  scanf("%s", codigoDaCarta);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade);

  printf("Informe a quantidade da população da cidade: ");
  scanf("%d", &populacao);

  printf("informe o pib da cidade(em Milhões): ");
  scanf("%f", &pib);

  printf("Informe a area da cidade(em km²): ");
  scanf("%f", &area);

  printf("informe quantos pontos turisticos tem na cidade: ");
  scanf("%d", &pontosTuristicos);

  densidadeDemografica = (float) populacao / area;
  pibPerCapita = pib / (float) populacao;

  printf("Os dados da carta 1 já foram guardados, agora iremos para a carta 2\n\n");
  
  // Carta 2
  
  printf("Criação carta 2: \n");

  printf("insira a letra correspondente ao seu estado: ");
  scanf(" %c", &estado2);
  
  printf("Insira o código da carta: ");
  scanf("%s", codigoDaCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade2);

  printf("Informe a quantidade da população da cidade: ");
  scanf("%d", &populacao2);

  printf("informe o pib da cidade(em milhões): ");
  scanf("%f", &pib2);

  printf("Informe a area da cidade(em km²): ");
  scanf("%f", &area2);

  printf("informe quantos pontos turisticos tem na cidade: ");
  scanf("%d", &pontosTuristicos2);

  densidadeDemografica2 = (float) populacao2 / area2;
  pibPerCapita2 = pib2 / (float) populacao2;


  // Área para exibição dos dados da cidade
  printf("\n\n");
  printf("Carta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código: %c%s\n", estado, codigoDaCarta);
  printf("Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Pib: %.2f Milhões\n", pib);
  printf("Área: %.2f km²\n", area);
  printf("Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade Demográfica: %.2f\n", densidadeDemografica);
  printf("Pib per cabita: %.2f\n", pibPerCapita);

  printf("\n\n");
  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigoDaCarta2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Pib: %.2f Milhões\n", pib2);
  printf("Área: %.2f km²\n", area2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Demográfica: %.2f\n", densidadeDemografica2);
  printf("Pib per cabita: %.2f\n\n", pibPerCapita2);




return 0;
} 
