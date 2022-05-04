#include "lista.h"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LRemove(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].nomes == d.nomes){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}


void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%s", l->vet[i].nomes);
	printf("\n");
}

//função que irá comparar o valor de cada posição com a primeira, segunda.. até comparar todas as posiçoes//
void ComparaValor(Lista *l){
	for(int i = l->first; i < l->last-1; i++){
		if(!(l->vet[i].achou)){
			for(int j = i + 1; j < l->last; j++){
				if(! (strcmp(l->vet[i].nomes, l->vet[j].nomes)) ){
					printf("\nNome repetido: %s\n", l->vet[i].nomes);
					l->vet[j].achou = true;
				}
			}
		}
	}
	LImprimeNovaLista(l);
}

//função que verifica se a lista está vazia e substitui o ultimo elemento de cada string de '\n' para '\0'//
void TrocaCaractere(Lista *l){
	if(l->first == l->last){
		printf("LISTA VAZIA!\n");
	}else{
		for(int i = l->first; i < l->last-1; i++){
			l->vet[i].nomes[strlen(l->vet[i].nomes) - 1] = '\0';
		}
		ComparaValor(l);
	}
	
}

void LImprimeNovaLista(Lista *l){
	for(int i=l->first; i<l->last; i++)
		if(!(l->vet[i].achou))
			printf("\n%s", l->vet[i].nomes);
	printf("\n");
}