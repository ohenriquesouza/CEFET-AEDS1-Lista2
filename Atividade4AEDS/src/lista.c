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
			if(l->vet[i].numeros == d.numeros){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}


void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%d\t", l->vet[i].numeros);
	printf("\n");
}

void EncontraMaximaSoma(Lista *l){
	int soma_total = 0;
	for(int i = l->first; i < l->last; i ++){
		int soma_atual = 0;
		for(int j = i; j < l->last; j++){
			soma_atual = l->vet[j].numeros + l->vet[j + 1].numeros;
			if(soma_atual > soma_total){
				soma_total = soma_atual;
			}else{
				soma_total += 0;
			}
		}
	}
	printf("A maior soma encontrada foi %d.\n", soma_total);
}