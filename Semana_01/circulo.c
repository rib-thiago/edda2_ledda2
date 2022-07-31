#!/usr/bin/tcc -run
/*
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:16
*/ 

#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(void) {

double raio = 0;
double A;

  scanf ("%lf", &raio);

  A = pow(raio, 2) * pi ;

  printf("\33[H\33[2J");
  printf("A=%.4lf \n", A);

  return 0;
}

/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

Entrada
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída
Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/
