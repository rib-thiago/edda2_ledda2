/*
Instituto Federal de São Paulo - Campus Pirituba
Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
Semana 01

Thiago Bernardes Ribeiro - PT3008452
Data: 30 Jul 2022 01:27
*/ 

#include <stdio.h>
#define TAM 20

int main(void) {

  int N[TAM];
  int i, temp, lenght;
  lenght = TAM - 1;

  for (i = 0; i <= lenght; i ++)
    scanf ("%d", &N[i]);
  
  for (i=0; i <= (TAM/2); i++){
    temp = N[i];
    N[i] = N[lenght - i];
    N[lenght - i] = temp;
  
  }
  
  printf("\33[H\33[2J");
  for (i = 0; i <= lenght; i ++)
    printf ("N[%d] = %d\n", i, N[i]);

  return 0;
}

/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
*/
