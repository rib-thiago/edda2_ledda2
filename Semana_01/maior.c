#!/usr/bin/tcc -run
/* 
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:16
*/ 

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char  argv[]) {

  FILE  filePtr;  
  int a, b, c, maiorAB; 

  if (argc != 2){
		printf ("\n Nenhum arquivo passado como parâmetro\n\n");
		exit (1);
	}

  filePtr = fopen(argv[1], "r");

  if (filePtr == NULL){
      printf("\n Erro ao abrir o arquivo\n\n");
      exit(2);
  }

  fscanf (filePtr, "%d %d %d", &a, &b, &c);
  maiorAB = (a + b + abs(a - b))/2;
  maiorAB = (c + maiorAB + abs(maiorAB - c))/2;
  printf ("%d eh o maior\n", maiorAB);

  fclose (filePtr);    

  return 0;
}

/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:


Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior". 
*/
