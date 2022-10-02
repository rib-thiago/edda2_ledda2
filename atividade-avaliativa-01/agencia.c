/*
  Instituto Federal de São Paulo - Campus Pirituba
  Laboratório de Estrutura de Dados e Programação (EDDA2 e LEDDA2)
  
  Atividade prática avaliativa

  Thiago Bernardes Ribeiro - PT3008452
  Data: 01 OUT 2022 22:38
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>

typedef struct {

    char placa[10];
    int ano;
    char marca[20];
    char modelo[20];
    char cor[15];
    float valor;

} Carro;

void limpabuffer (void)
{

    char c;
    while ((c = getchar()) != '\n' );
}

void display (void)
{

    printf("\33[H\33[2J");
    printf("Menu:\n");
    printf("1 - Cadastrar novo veículo\n2 - Listar Veículos\n");
    printf("3 - Buscar Veiculo por Placa\n4 - Buscar Veiculo por Ano de Fabricação\n5 - Sair\n");

}

void cadastrar(int *iPtr, Carro *carPtr)
{
    printf("\nPlaca do veículo: \n");
    scanf("%s", carPtr[*(iPtr)-1].placa);

    printf("\nAno de fabricação: \n");
    scanf("%d", &carPtr[*(iPtr)-1].ano);

    printf("\nMarca do veículo: \n");
    scanf("%s", carPtr[*(iPtr)-1].marca);

    printf("\nModelo do veículo: \n");
    scanf("%s", carPtr[*(iPtr)-1].modelo);

    printf("\nCor do veículo: \n");
    scanf("%s", carPtr[*(iPtr)-1].cor);

    printf("\nValor de venda: \n");
    scanf("%f", &carPtr[*(iPtr)-1].valor);
}

void listar(int *i, Carro *carPtr)
{

    for (int j = 0; j < *i - 1; j++) {
        printf("\nPlaca: %s", carPtr[j].placa);
        printf("\nAno de fabricação: %d", carPtr[j].ano);
        printf("\nMarca do veículo: %s", carPtr[j].marca);
        printf("\nModelo do veículo: %s", carPtr[j].modelo);
        printf("\nCor do veículo: %s", carPtr[j].cor);
        printf("\nValor de venda: %.2f", carPtr[j].valor);
        printf("\n______________________");
    }
}

void buscarPlaca(int *i, Carro *carPtr)
{

    char placa[10];

    printf("\nDigite a placa a ser procurada: \n");
    scanf("%s", placa);

    int match, fimvetor = *i - 1;

    for (int j = 0; j < *i - 1; j++) {

        match = strcmp(placa, carPtr[j].placa);
        if (match == 0) {
            printf("\n________________________");
            printf("\nPlaca: %s", carPtr[j].placa);
            printf("\nAno de fabricação: %d", carPtr[j].ano);
            printf("\nMarca do veículo: %s", carPtr[j].marca);
            printf("\nModelo do veículo: %s", carPtr[j].modelo);
            printf("\nCor do veículo: %s", carPtr[j].cor);
            printf("\nValor de venda: %.2f", carPtr[j].valor);
            printf("\n________________________");
        } else {
            if ((j + 1) == fimvetor)
                printf("\nVeículo não encontrado!\n\n");
        }
    }
}

void buscarAno (int *i, Carro *carPtr)
{
    int *range; 
    int anoIni, anoFin, cont = 0;

    range = (int *)malloc(*i * sizeof(int));

    if (!range) {
        printf("Erro: Memoria Insuficiente");
        EXIT_FAILURE;
    }

    do {
        printf("\nAno Inicial: \n");
        scanf("%d", &anoIni);

        printf("\nAno Final:\n");
        scanf("%d", &anoFin);
        if (anoIni > anoFin) {
            printf("\nA data inicial precisa ser anterior à data final");
        }
    } while (anoIni > anoFin);

    for (int j = 0; j < *i - 1; j++) {

        if (carPtr[j].ano >= anoIni && carPtr[j].ano <= anoFin) {
            range[cont] = j;
            cont += 1;
        }
    }

    if (cont > 0) {
        for (int j = 0; j < cont; j++) {
            printf("\n________________________");
            printf("\nPlaca: %s", carPtr[range[j]].placa);
            printf("\nAno de fabricação: %d", carPtr[range[j]].ano);
            printf("\nMarca do veículo: %s", carPtr[range[j]].marca);
            printf("\nModelo do veículo: %s", carPtr[range[j]].modelo);
            printf("\nCor do veículo: %s", carPtr[range[j]].cor);
            printf("\nValor de venda: %.2f", carPtr[range[j]].valor);
            printf("\n________________________");
        }
    } else {
        printf("\33[H\33[2J");
        printf("\nNão há registros para os parâmetros informados!\n\n");
    }

    free (range);
}


int main (int argc, char *argv[ ])
{

    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    int opcao;
    char menu;

    int *iPtr;
    Carro *carPtr;

    iPtr = &i;
    carPtr = (Carro *)malloc(i * sizeof(Carro));

    if (!carPtr) {
        printf("Erro: Memoria Insuficiente");
        EXIT_FAILURE;
    }

    do {

        display();
        scanf("%c", &menu);
        limpabuffer();

        switch (menu) {

        case '1':
            printf("\33[H\33[2J");
            cadastrar(&i, carPtr);
            *iPtr = *iPtr + 1;
            carPtr = (Carro *)realloc(carPtr, i * sizeof(Carro));
            if (!carPtr) {
                printf("Erro: Memoria Insuficiente");
                EXIT_FAILURE;
            }
            break;

        case '2':
            printf("\33[H\33[2J");
            listar(&i, carPtr);
            break;

        case '3':
            printf("\33[H\33[2J");
            buscarPlaca(&i, carPtr);
            break;

        case '4':
            printf("\33[H\33[2J");
            buscarAno(&i, carPtr);
            break;

        case '5':
            // sair do programa
            break;

        default:
            printf("\nOpção Inválida! Escolha um número entre 1 e 5\n");
        }

        printf("\nPressione qualquer teclar para retornar ao menu ou 0 (zero) para sair\n");
        scanf("%d", &opcao);
        limpabuffer();

    } while (opcao != 0);

    free (carPtr);
    return EXIT_SUCCESS;
}
