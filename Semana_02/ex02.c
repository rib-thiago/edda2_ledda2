// #!/usr/bin/tcc -run

/*
 Instituto Federal de São Paulo - Campus Pirituba
 Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
 Semana 02

  Thiago Bernardes Ribeiro - PT3008452
  Data: 15 Ago 2022 00:38
*/


#include <stdio.h>

#define TAM 5



int main(void)
{

    int maior_valor, linha, coluna = 0;
    int matriz[TAM][TAM];

    printf ("\nInsira os valores para a matriz: \n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf ("%d", &matriz[i][j]);
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\33[H\33[2J");
    printf ("\nA matriz inserida: \n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf ("%d\t", matriz[i][j]);
        }
        printf ("\n");
    }

    printf("\n\n");
    printf("O maior valor: %d\n", maior_valor);
    printf("Linha do maior valor: %d\n", linha);
    printf("Coluna do maior valor: %d\n", coluna);

    return 0;


}



/*
Escreva um programa que leia números para uma matriz 5x5. Em seguida, imprima os valores contidos na matriz e retorne a localização (linha e coluna) do maior valor.
*/
