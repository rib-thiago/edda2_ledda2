#!/usr/bin/tcc -run
/*
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:32
*/ 

#include <stdio.h>
#include <stdlib.h>
#define comissao 0.15


int main(int argc, char *argv[]) {

  FILE *filePtr;
  char nome_fun [30];
  double salario_fixo, montante_vendas, salario_total;

  if (argc != 2){
		printf ("\n Nenhum arquivo passado como parâmetro\n\n");
		exit (1);
	}

  filePtr = fopen(argv[1], "r");

  if (filePtr == NULL){
      printf("\n Erro ao abrir o arquivo\n\n");
      exit(2);
  }

  fscanf (filePtr, "%s %lf %lf", nome_fun, &salario_fixo, &montante_vendas);
  salario_total = salario_fixo + (montante_vendas * comissao);
  printf ("TOTAL = R$ %.2lf\n", salario_total);

  fclose (filePtr);

  return 0;
}

/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída
Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.
*/
