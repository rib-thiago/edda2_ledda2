// #!/usr/bin/tcc -run

/*
 Instituto Federal de São Paulo - Campus Pirituba
 Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
 Semana 02

  Thiago Bernardes Ribeiro - PT3008452
  Data: 15 Ago 2022 00:38
*/

#include <stdio.h>
#include <string.h>

#define TAM 255

int main(void)
{

    char string[255];
    int tamanho;
    int count = 0;

    fgets(string, TAM, stdin);

    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            count ++;
        }
    }

    printf("\nQuantidade de palavras na cadeia inserida: %d\n", count);
    return 0;
}


/*

Elabore um programa em C que recebe pelo teclado uma cadeia de caracteres até 255 posições e exibe na tela um número inteiro correspondente à quantidade de palavras existentes na cadeia. Admita que as palavras podem ter um ou mais caracteres e que a separação entre elas é sempre um caractere de espaço em branco.

*/
