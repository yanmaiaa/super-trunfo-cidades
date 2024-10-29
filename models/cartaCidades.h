#ifndef CARTA_CIDADE_H
#define CARTA_CIDADE_H

typedef struct
{
  char nome[50];
  int populacao;         
  double area;           // em
  double pib_per_capita; 
  double qualidade_vida; 
} CartaCidade;

CartaCidade criar_carta_cidade(char *nome, int populacao, double area, double pib_per_capita, double qualidade_vida);
void exibir_carta(CartaCidade carta);

#endif
