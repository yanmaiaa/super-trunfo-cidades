#include "cartaCidades.h"
#include <stdio.h>
#include <string.h>

CartaCidade criar_carta_cidade(char *nome, int populacao, double area, double pib_per_capita, double qualidade_vida)
{
  CartaCidade carta;
  strncpy(carta.nome, nome, sizeof(carta.nome) - 1);
  carta.populacao = populacao;
  carta.area = area;
  carta.pib_per_capita = pib_per_capita;
  carta.qualidade_vida = qualidade_vida;
  return carta;
}

void exibir_carta(CartaCidade carta)
{
  printf("Cidade: %s\n", carta.nome);
  printf("Populacao: %d mil habitantes\n", carta.populacao);
  printf("Area: %.2f quilometros quadrados\n", carta.area);
  printf("PIB per capita: %.2f mil dolares\n", carta.pib_per_capita);
  printf("Qualidade de vida: %.2f\n", carta.qualidade_vida);
}
