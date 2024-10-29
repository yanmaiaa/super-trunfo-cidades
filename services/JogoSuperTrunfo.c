#include "JogoSuperTrunfo.h"
#include "../models/cartaCidades.h"
#include "../utils/utils.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARTAS 100

CartaCidade cartas[MAX_CARTAS];
int total_cartas = 0;

void cadastrar_carta()
{
  char nome[50];
  int populacao;
  double area, pib_per_capita, qualidade_vida;

  printf("Nome da Cidade: ");
  ler_string(nome, sizeof(nome));

  populacao = ler_inteiro("Populacao (em milhares): ");
  area = ler_double("Área (em quilometros quadrados): ");
  pib_per_capita = ler_double("PIB per capita (em mil dolares): ");
  qualidade_vida = ler_double("Qualidade de vida (de 0 a 10): ");

  CartaCidade carta = criar_carta_cidade(nome, populacao, area, pib_per_capita, qualidade_vida);
  if (total_cartas < MAX_CARTAS)
  {
    cartas[total_cartas++] = carta;
    printf("Carta cadastrada com sucesso!\n\n");
  }
  else
  {
    printf("Erro: limite de cartas atingido.\n");
  }
}

void listar_cartas()
{
  printf("Cartas Cadastradas:\n");
  for (int i = 0; i < total_cartas; i++)
  {
    exibir_carta(cartas[i]);
    printf("\n");
  }
}

void iniciar_jogo()
{
  int opcao;
  while (1)
  {
    printf("Bem-vindo ao Super Trunfo de Cidades!\n");
    printf("1. Cadastrar nova carta\n");
    printf("2. Listar cartas cadastradas\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");

    opcao = ler_inteiro("");

    switch (opcao)
    {
    case 1:
      cadastrar_carta();
      break;
    case 2:
      listar_cartas();
      break;
    case 3:
      printf("Saindo do jogo...\n");
      return;
    default:
      printf("Opção invalida. Tente novamente.\n");
      break;
    }
  }
}
