#include "lista.h"

int main(){

	Lista l;
	Item aux;
	int tamanho_conjunto = 0;

	FLVazia(&l);

	//coleta de dados//
	printf("Informe quantos numeros deseja no conjunto: ");
	scanf("%d", &tamanho_conjunto);

	for(int i = 0; i < tamanho_conjunto; i++){
		printf("\nInsira o %dº numero do conjunto: ", i + 1);
		scanf("%d", &aux.numeros);
		LInsert(&l, aux);
	}

	LImprime(&l);

	EncontraMaximaSoma(&l);

	return 0;
}