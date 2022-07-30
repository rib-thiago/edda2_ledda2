/*
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:38
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  
  FILE *filePtr;
  int numero_funcionario; 
  int horas_trabalhadas;
  double valor_horas;
  double salario;

  
  if (argc != 2){
		printf ("\n Nenhum arquivo passado como parâmetro\n\n");
		exit (1);
	}

  filePtr = fopen(argv[1], "r");

  if (filePtr == NULL){
      printf("\n Erro ao abrir o arquivo\n\n");
      exit(2);
  }

  fscanf (filePtr, "%d %d %lf", &numero_funcionario, &horas_trabalhadas, &valor_horas);
  salario = horas_trabalhadas * valor_horas;
  printf ("NUMBER = %d\nSALARY = U$ %.2lf\n", numero_funcionario, salario);
  
  fclose (filePtr);

  return 0;
}

/*
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
*/
