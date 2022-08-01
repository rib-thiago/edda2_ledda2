 #!/usr/bin/tcc -run
 /*
 Instituto Federal de São Paulo - Campus Pirituba
 Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
 Semana 01
 
 Thiago Bernardes Ribeiro - PT3008452
 Data: 30 Jul 2022 01:38
 */

 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 4

void limpabuffer (void){

  char c;																				
	while ((c = getchar()) != '\n' );													
}


void preenche_vetor (int c, double aux, double M[TAM][TAM], char opt){
  int cont = 0;
  
  for ( int i = 0; i < TAM; ++i )
		  for ( int j = 0; j < TAM; ++j ){
      	scanf ("%lf", &M[i][j]);
        if(j == c){
          aux += M[i][j];
          cont ++;
        }          
	    }

  if (opt == 'M')
    aux /= cont;

  printf("\33[H\33[2J");
  printf("%.1lf\n", aux);  
  
}

int main(void) {

  int C;
  char T;
  double M[TAM][TAM];
  double aux;

  scanf ("%d", &C);
  limpabuffer ();
  
  if (C >= 0 && C <= (TAM - 1)) {
    scanf ("%c", &T);    
  } else {
    printf ("\nNumero informado não corresponde a uma coluna da matriz M\n\n");
    exit(1);
  }

  if (isupper (T) == 0){
    printf ("\nO caracter informado deve ser maiusculo\n\n");
    exit(2);
  } else {
    switch (T){
    case 'S':
          preenche_vetor (C, aux, M, T);
          break;
    case 'M':
          preenche_vetor (C, aux, M, T);
          break;
    default:																		
					printf ("\n\n OPÇÃO INVÁLIDA!\n\n");	
          break;
    }
  }
  
  return 0;
}
