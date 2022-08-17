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

    int matriz[TAM][TAM];
    int numero, linha, coluna;

    printf("\nInsira os valores para a matriz: \n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf("\33[H\33[2J");
    printf("Insira um número para ser procurado na matriz: \n");
    scanf("%d", &numero);
    printf("\33[H\33[2J");

    int aux = 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (numero == matriz[i][j]) {
                aux = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    if (aux != 0) {
        printf("\nNumero procurado: %d\n", numero);
        printf("\nLinha do numero procurado: %d\n", linha);
        printf("\nColuna do numero procurado: %d\n", coluna);
    } else {
        printf("\nNão encontrado\n");
    }

    printf ("\n\n");
    printf("\nMatriz para conferir o resultado: \n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf ("\n");
    }


    return 0;
}

/*
Escreva um programa que leia números para uma matriz 5x5 e na sequência leia também um número que deverá ser procurado na matriz. Após as leituras, o programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”
*/
