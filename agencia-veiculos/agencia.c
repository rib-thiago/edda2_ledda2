#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>



#define TAM 100
#define PLACA 8
#define ANO 4
#define LEN 10


typedef struct {

 char placa[PLACA];
 char ano[ANO];
 char marca[LEN];
 char modelo[LEN];
 char cor[LEN];
 float valor;

} Carro;

void limpabuffer (void);
void display (void);
Carro cadastrar(void);
Carro exibir (Carro C);
void listar (Carro *cadastro[]);

int main (int argc, char *argv[ ]){

	setlocale(LC_ALL, "Portuguese");

	char menu = '0';
	int opcao = 1;
	int cont = 0;
	Carro *cadastro;

	cadastro = (Carro *)calloc(TAM, sizeof(Carro));

	if (!cadastro) { 
		printf("Erro: Memoria Insuficiente");
		EXIT_FAILURE;
  	} 

	do {

		display();
		menu = getchar();
 
		switch (menu) {
		
			case '1':
				cadastro[cont] = cadastrar();
				cont ++;
				break;
			case '2':
				listar(&cadastro);
				break;
			case '3':
				//buscarPlaca();
				break;
			case '4':
				//buscarAno();
				break;
			case '5':
				break;
			default:
				printf("\nOpção Inválida! Escolha um número entre 1 e 5\n");
		}

		printf("\nPressione 0 (zero) para sair\n");
		opcao = getchar();
	} while (opcao == '0');


return 0;

}

void limpabuffer (void){

  char c;																				
	while ((c = getchar()) != '\n' );													
}

void display (void){

 printf("Menu:\n");
 printf("1 - Cadastrar novo veículo\n2 - Listar Veículos\n");
 printf("3- Buscar Veiculo por Placa\n4 - Buscar Veiculo por Ano de Fabricação\n5 - Sair\n");

}

Carro cadastrar() { 
    limpabuffer();
	Carro C;
    printf("\nPlaca do Carro: \n");
	fgets(C.placa, PLACA, stdin);
	limpabuffer():
	printf("\nAno de Fabricação: \n");
	fgets(C.ano, ANO, stdin);
	limpabuffer();
	printf("\nMarca: \n");
	fgets(C.marca, LEN, stdin);
	limpabuffer();
	printf("\nModelo: \n");
	fgets(C.modelo, LEN, stdin);
	limpabuffer();
	printf("\nCor: \n");
	fgets(C.cor, LEN, stdin);
	limpabuffer();
	printf("\nValor de Venda (Em Reais): \n");
	scanf("%f", &C.valor);
	limpabuffer();
    return C; 
}

Carro exibir (Carro C){
	printf("\nplaca: %s, ano de fabricação: %s, marca: %s, modelo: %s, cor: %s, valor de venda: %.2f\n",
	C.placa, C.ano, C.marca, C.modelo, C.cor, C.valor);
}

void listar (Carro *cadastro[]){
	for (int i = 0; i < TAM; i++){
		exibir(*cadastro[i]);
	}
}