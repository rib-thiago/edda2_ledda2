// #!/usr/bin/tcc -run

/*
 Instituto Federal de São Paulo - Campus Pirituba
 Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
 Semana 01

  Thiago Bernardes Ribeiro - PT3008452
  Data: 15 Ago 2022 00:38
*/



#include<stdio.h>
#include<string.h>
#include<ctype.h>

# define TAM 100
# define LEN len - 1


int main()
{

    char nome[TAM];

    printf("Digite seu nome: \n");
    fgets(nome, TAM, stdin);

    int len = strlen(nome);
    int j;

    printf("Código de Acesso: ");

    for(j = LEN; j >= 0; j--) {
        if(nome[j] == ' ') {
            break;
        }
    }

    printf("%c.",toupper(nome[0]));

    for(int i = 0; i < LEN; i++) {
        if(nome[i] == ' ') {
            printf("%c.",toupper(nome[i+1]));
        }
    }
    printf ("\n");


    return 0;

}

/*

Escreva um programa que gere um código de acesso para cada pessoa. O código deve ser composto pelas iniciais de cada nome da pessoa. Exemplo: Vanessa Andrade Lima => VAL.


*/
