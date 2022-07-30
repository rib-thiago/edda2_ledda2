/*
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:44
*/ 

#include <stdio.h>
#define TAM 10

int main(void) {

  int i, aux;
  int numero[TAM];

  scanf ("%d",&aux); 
  printf("\33[H\33[2J");
  for (i = 0; i <= (TAM - 1) ; i ++ ){
    numero[i] = aux;
    printf ("N[%d] = %d\n", i , numero[i]);
    aux *= 2;
  }

  return 0;
}

/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V.
*/
